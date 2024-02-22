/*Call by value : if you change in intial parameter in the function it wont take change in the main function*/
// use to return some new value such as z =x+y but if want to change the formal parameter of function you need to use call by address or reference
#include <iostream>
#include <cmath>

using namespace std;


void swap (int a, int b){
    cout << a << " and " << b <<endl;


    int bucket = a ;// store the first variable in some new variable(int bucket)

    a = b ;// now take value of b in a

    b= bucket ;// now from the extra variable take the orginal value of a

    cout << a << " and " << b <<endl;


}


using namespace std ;


int main (){

    int x = 10 , y = 20 ;
    swap (x,y);

    cout << x << " and " << y <<endl;// it wont be swapped outside the fuction



    return 0;
}


