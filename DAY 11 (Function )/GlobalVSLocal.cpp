//what is diff b/w local and global varaible 

//x means the one inside main
//::x means global x

#include <iostream>
#include <cmath>

using namespace std ;

int g = 0 ;//global variable outside main func or any funct , it is accesible throughout the program and doesnt change
// to call global in main use( ::g )!!!
void fun(){

    int a=5;// local variable
    g = g+a;// 15+5 = 20

    cout<<"in the actual function :"<< g <<endl;//20

}

int main (){

    g = 15;// local variable
    // call the function with the g value !!!!!
    fun ();// 20 from the function ie 15+5 =20
    g++;// than we iterate in the main function 20+1 =21
    cout<<"in the MAIN function :"<<g <<endl;// 21

}// g will be always there even if the function is over not like a in the fun funtion a value is garabge after function ends