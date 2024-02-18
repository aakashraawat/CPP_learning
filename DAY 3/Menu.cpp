#include<iostream>
#include<cmath>

using namespace std ;

int main () {

    cout << "MENU" << endl ;
    cout << "1. ADD" << endl ;
    cout << "2. SUB " << endl ;
    cout << "3. MUL " << endl ;
    cout << "4. DIV " << endl ;


    

   // Selection from menu
    int option ;
    cout <<"Enter your choice "<< endl;
    cin >> option ;

    int a , b ,c  ;

    cout <<"Enter 2 integers to perform the choice " << endl;

    cin >> a >> b  ;

    switch (option)
    {
    case 1 : c = a+b ; // perform the operation to be chosen as if first is add

        break;
    case 2 :c = a-b ;
    
        break;

    case 3 : c= a*b  ;
       
        break;

    case 4 : c= a/b ;

        break;
    
    default: cout <<"invalid choice " <<endl;
        break;
    }


cout << " results of the operation is "<< c << endl ;// prints the result from switch statement on basis of what case you chose



}