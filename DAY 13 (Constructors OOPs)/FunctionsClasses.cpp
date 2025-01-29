// constructors is used to give initial state to objects in a class 

// objects are things derived from class like bmw , audi , merc from a car class 

#include<iostream>
#include<cmath>

using namespace std ;

// init a class called rectangle

class Rectangle {

    private:// init the varaibles to be used in main 

    int length ;
    int breadth ;


    public : // init  constructors 

    Rectangle();// non parameterizerd constructor

    Rectangle(int l= 1 , int b = 1);// parameterized constructors:
    //This type of constructor allows you to pass parameters when creating an object, 
    //enabling you to initialize object attributes with specific values.


    Rectangle(Rectangle &rec) ;// copy constructor 


    // Function to check length ie  mutators 

    void setLength(int l);
    void setBreadth(int b);


    // Accesors ie get method

    void getLength();
    void getBreadth();

    // Main Function to calculate area (Fascillators )

    int area ();
    int perimeter();

    int isSqaure(); // Enquiry to check 

    // Destructor 

    ~Rectangle();





}; // Important 









int main  () {








    return 0 ;
}