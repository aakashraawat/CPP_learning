// Problems with pointers : runtime errors ( one of the major reason is pointer)
#include <iostream>


using namespace std ;


int main ( ){

//1.  Uninitalized ptr

       int x= 10; // declare a variable  
       int *p ; // initialize a pointer 

      /*1. */ p = &x ;// pointer is pointing to known variable 10 
        cout << *p ; // prints the value ie 10
        cout << p ;// prints the address 0x16f5d301c%

        /*2*/ p = new int[5]; // heap memory new array

}
//2.  Memory leak

       /* int *p = new int [5];
        


        delete[]p;// really important for the null pointer to avoid memory leak ( delete the memory if you are not using it)

        p = nullptr;




//3.  Dangling Ptr (rewatch this when u are on functions)


    //void main








}*/