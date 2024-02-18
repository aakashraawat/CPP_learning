#include <iostream>
#include <cmath>

using namespace std ;

int main()  {

    float a , b , c ;

    cout << "enter a :" ;
    cin >> a ;

    cout << "enter b :" ;
    cin >> b ;

    cout << "enter c :" ;
    cin >> c ;


    float root1 ;
    float root2 ;

    root1 = (-b+sqrt(b*b-4*a*c))/(2*a);

    root2 = (-b-sqrt(b*b-4*a*c))/(2*a);

    cout << "Roots are " << root1 << " " << "and" << root2 << endl;










}