#include <iostream>
#include <cmath>

using namespace std ;

int main (){
    

    //int A[10]; // initializing an array with elements  cant be changed through out the code
    int size ;

    cout<< "Enter number of elements :"<< endl;
    cin>>size ;


    int *p = new int [size]; // declaring pointer for the size in heap memory


    cout<< "Enter New size:"<< endl;
    cin>>size ;
    p = new int [size]


    int A[size]; // initiallising an array with the user defined size through keyboard

    // once an array is created u cant change the size 


    cout << sizeof A << endl;// checking the size in bytes ie 5 array elements is 20 bytes







}