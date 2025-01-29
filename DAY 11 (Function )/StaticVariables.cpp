// STATIC VARIABLE: Imagine that they  are gloabal and they are limited to the functiomn

#include <iostream>
#include <cmath>


using namespace std;


int v = 0;// global variable

int fun (){
    // static fuunction is created only one time / so second time it wont be = 0,
    static int v=0; // only differnce is it wont be in the memory 

    int a = 5 ; // local variable only access inside the function
    v++;
    cout <<"Value of a is ;"<< a << "and "<<"value of V is : "<< v << endl;


}






int main (){


    fun();// a: 5 ; v: 1 
    fun();//a: 5 ; v: 2
    fun();//a: 5 ; v: 3

    // Problem :v is changing as it is global variable so once the value is chnaged it cant return to it without resting it


    // Reason : global variable will always remain in the memory



    return 0;
}