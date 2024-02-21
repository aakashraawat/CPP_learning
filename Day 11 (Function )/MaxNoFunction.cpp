#include <iostream>
#include <cmath>


using namespace std ;


int max_int(int a , int b , int c){

    if (a>b && a>c)
        return a;
    else if (b>c)
        return b;
    else return c;



}


int main () {

    int r = max_int(1000 , 120 , 199);

    cout << "Max no is : "<< r <<endl;



    return 0;
}