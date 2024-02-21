#include <iostream>
#include <cmath>

using namespace std ;


int main () {


    char s[100];
    char s2[100];

    cout << "Enter your name"<< endl ;
        // if we use cin.get it wont go the next string !!! used getline 
    cin.getline(s,100); // to enter the characters
    //cin.getline(s,50); same function 

    cout << "Welcome "<< s << endl;

// 2nd time the compiler is not reading from the keyboard you have to use cin.getline function instead of cin.get
    cout << "Enter your name Again"<< endl ;

    cin.get(s2,100); // to enter the characters
    //cin.getline(s,50); same function 

    cout << "Welcome "<< s2 << endl;

    return 0;





}