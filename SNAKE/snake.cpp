#include <SFML/Graphics.hpp>
#include <vector>
#include <iostream>

// Define possible movement directions.
enum Direction { Up, Down, Left, Right };

// Returns an offset (in grid cells) for a given direction.
sf::Vector2i getOffset(Direction dir) {
    switch(dir) {
        case Up:    return sf::Vector2i(0, -1);
        case Down:  return sf::Vector2i(0, 1);
        case Left:  return sf::Vector2i(-1, 0);
        case Right: return sf::Vector2i(1, 0);
    }
    return sf::Vector2i(0, 0);
}

// Checks if two directions are opposites (i.e. a 180° turn, which is disallowed).
bool isOpposite(Direction d1, Direction d2) {
    return ((d1 == Up    && d2 == Down)  ||
            (d1 == Down  && d2 == Up)    ||
            (d1 == Left  && d2 == Right) ||
            (d1 == Right && d2 == Left));
}

// Structure representing a snake.
struct Snake {
    std::vector<sf::Vector2i> segments; // Each cell the snake occupies.
    Direction dir;                      // Current movement direction.
    bool alive;                         // Whether the snake is still in play.
    sf::Color color;                    // Color for drawing.
};

int main()
{
    // --- Game settings ---
    const int cellSize = 20;       // Size (in pixels) of each grid cell.
    const int boardWidth = 40;     // Number of columns.
    const int boardHeight = 30;    // Number of rows.
    const int windowWidth = boardWidth * cellSize;
    const int windowHeight = boardHeight * cellSize;

    // Create the window.
    sf::RenderWindow window(sf::VideoMode(windowWidth, windowHeight), "Snake Duel");
    window.setFramerateLimit(60);

    // The board occupancy: 0 = free, 1 = snake1, 2 = snake2.
    std::vector<int> board(boardWidth * boardHeight, 0);

    // --- Initialize the two snakes ---
    Snake snake1, snake2;
    snake1.alive = true;
    snake2.alive = true;
    snake1.color = sf::Color::Green;
    snake2.color = sf::Color::Blue;
    
    // Place snake1 on the left–quarter of the board and snake2 on the right–quarter.
    snake1.segments.push_back(sf::Vector2i(boardWidth / 4, boardHeight / 2));
    snake2.segments.push_back(sf::Vector2i(3 * boardWidth / 4, boardHeight / 2));
    
    // Initial directions: snake1 moves right and snake2 moves left.
    snake1.dir = Right;
    snake2.dir = Left;
    
    // Mark their starting cells on the board.
    board[snake1.segments[0].y * boardWidth + snake1.segments[0].x] = 1;
    board[snake2.segments[0].y * boardWidth + snake2.segments[0].x] = 2;

    // --- Timing setup ---
    sf::Clock clock;
    float updateInterval = 0.1f; // Game updates every 0.1 seconds

    // --- Load font for displaying game-over text ---
    sf::Font font;
    if (!font.loadFromFile("sansation.ttf")) {
         std::cout << "Failed to load font 'sansation.ttf'. Game-over text will not display." << std::endl;
    }
    sf::Text gameOverText;
    gameOverText.setFont(font);
    gameOverText.setCharacterSize(40);
    gameOverText.setFillColor(sf::Color::Red);
    // Position the text roughly in the middle of the window.
    gameOverText.setPosition(windowWidth / 4, windowHeight / 2);

    bool gameOver = false;
    std::string winnerText = "";

    // --- Main game loop ---
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            // Allow the window to be closed.
            if (event.type == sf::Event::Closed)
                window.close();

            // Process key presses to control the snakes.
            if (event.type == sf::Event::KeyPressed)
            {
                // --- Controls for Snake 1 (W, A, S, D) ---
                if (event.key.code == sf::Keyboard::W) {
                    if (!isOpposite(snake1.dir, Up))
                        snake1.dir = Up;
                }
                else if (event.key.code == sf::Keyboard::S) {
                    if (!isOpposite(snake1.dir, Down))
                        snake1.dir = Down;
                }
                else if (event.key.code == sf::Keyboard::A) {
                    if (!isOpposite(snake1.dir, Left))
                        snake1.dir = Left;
                }
                else if (event.key.code == sf::Keyboard::D) {
                    if (!isOpposite(snake1.dir, Right))
                        snake1.dir = Right;
                }
                
                // --- Controls for Snake 2 (Arrow keys) ---
                if (event.key.code == sf::Keyboard::Up) {
                    if (!isOpposite(snake2.dir, Up))
                        snake2.dir = Up;
                }
                else if (event.key.code == sf::Keyboard::Down) {
                    if (!isOpposite(snake2.dir, Down))
                        snake2.dir = Down;
                }
                else if (event.key.code == sf::Keyboard::Left) {
                    if (!isOpposite(snake2.dir, Left))
                        snake2.dir = Left;
                }
                else if (event.key.code == sf::Keyboard::Right) {
                    if (!isOpposite(snake2.dir, Right))
                        snake2.dir = Right;
                }
            }
        }

        // --- Update the game state at fixed intervals ---
        if (!gameOver && clock.getElapsedTime().asSeconds() >= updateInterval)
        {
            clock.restart();

            // Calculate the new head positions based on current directions.
            sf::Vector2i offset1 = getOffset(snake1.dir);
            sf::Vector2i newHead1 = snake1.segments.back() + offset1;
            sf::Vector2i offset2 = getOffset(snake2.dir);
            sf::Vector2i newHead2 = snake2.segments.back() + offset2;

            bool collision1 = false;
            bool collision2 = false;

            // --- Check for collisions for Snake 1 ---
            // Out of bounds?
            if (newHead1.x < 0 || newHead1.x >= boardWidth || newHead1.y < 0 || newHead1.y >= boardHeight)
                collision1 = true;
            // Running into an already occupied cell?
            if (!collision1) {
                int index = newHead1.y * boardWidth + newHead1.x;
                if (board[index] != 0)
                    collision1 = true;
            }

            // --- Check for collisions for Snake 2 ---
            if (newHead2.x < 0 || newHead2.x >= boardWidth || newHead2.y < 0 || newHead2.y >= boardHeight)
                collision2 = true;
            if (!collision2) {
                int index = newHead2.y * boardWidth + newHead2.x;
                if (board[index] != 0)
                    collision2 = true;
            }

            // If both snakes try to move into the same cell, that’s a collision for both.
            if (!collision1 && !collision2 && newHead1 == newHead2) {
                collision1 = true;
                collision2 = true;
            }

            // --- Update snake positions and board occupancy ---
            if (!collision1)
            {
                snake1.segments.push_back(newHead1);
                board[newHead1.y * boardWidth + newHead1.x] = 1;
            }
            else
                snake1.alive = false;

            if (!collision2)
            {
                snake2.segments.push_back(newHead2);
                board[newHead2.y * boardWidth + newHead2.x] = 2;
            }
            else
                snake2.alive = false;

            // --- Check for game-over conditions ---
            if (!snake1.alive || !snake2.alive)
            {
                gameOver = true;
                if (!snake1.alive && !snake2.alive)
                    winnerText = "Draw!";
                else if (!snake1.alive)
                    winnerText = "Player 2 Wins!";
                else if (!snake2.alive)
                    winnerText = "Player 1 Wins!";
                gameOverText.setString(winnerText);
            }
        }

        // --- Render ---
        window.clear(sf::Color::Black);

        // Draw all segments for snake1.
        for (const auto &pos : snake1.segments)
        {
            sf::RectangleShape rect(sf::Vector2f(cellSize - 1, cellSize - 1));
            rect.setFillColor(snake1.color);
            rect.setPosition(pos.x * cellSize, pos.y * cellSize);
            window.draw(rect);
        }
        // Draw all segments for snake2.
        for (const auto &pos : snake2.segments)
        {
            sf::RectangleShape rect(sf::Vector2f(cellSize - 1, cellSize - 1));
            rect.setFillColor(snake2.color);
            rect.setPosition(pos.x * cellSize, pos.y * cellSize);
            window.draw(rect);
        }

        // If the game is over, draw the game-over message.
        if (gameOver)
            window.draw(gameOverText);

        window.display();
    }

    return 0;
}
