#include <iostream>

// switch and break (menu driven programs such as notepads)

#include <cmath>
using namespace std ;

int main (){

    int day ;

    cout << "Enter day number " << endl;
    cin >> day ;

    switch (day)
    {
    case 1 : cout << "MON " << endl;/* constant-expression */
        /* code */
        break;
    case 2 : cout << "Tue " << endl;
        break ;
    case 3 : cout << "Wed " << endl;
        break ;
    case 4 : cout << "Thur " << endl;
        break ;
    case 5 : cout << "Fri" << endl;
        break ;
    case 6: cout << "Sat" << endl;
        break ;
    case 7 : cout << "Sun " << endl;
        break ;
    
    default: cout <<"Invalid day" << endl;
        break;
    }











}