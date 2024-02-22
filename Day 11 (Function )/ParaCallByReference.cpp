// call by reference : Changes can be done to main vairiables 
// dont write complex things in call by reference function no loops .. statements are sufficient

#include <iostream>
#include <cmath>

using namespace std;

// its accessing the variable the main function and can affect the parameters value as we are using pointers to point  the memory and changing the address to deisred place

///        Formal paramters
void swap (int &a, int &b){// a as a reference to x and same for y.
    cout << a << " and " << b <<endl;


    int bucket = a ;// (As a pointer)store the first variable in some new variable(int bucket)

    a = b ;// now take value of b in a

    b= bucket ;// now from the extra variable take the orginal value of a

    cout << a << " and " << b <<endl;


}


using namespace std ;


int main (){

    int x = 10 , y = 20 ;
    swap (x,y);// swap the refernce and it access the a and b in the swap function

    cout << x << " and " << y <<endl;// it wont be swapped outside the fuction



    return 0;
}

