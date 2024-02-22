// pointer to function 

#include <iostream>
#include <cmath>


using namespace std ;



void display (){

    cout <<"HEll0"<<endl;
}


int main (){


    // define a pointer to the function 

    void (*fp)();// declaration
    fp= display ;// initiallise
    (*fp)();// funtion call

   // display();






    return 0;
}