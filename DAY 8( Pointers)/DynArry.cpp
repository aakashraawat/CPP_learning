#include iostream
#include cmath


using namespace std ;

int main () {

    int *p = new int [20];

    // before pointing to the new no of elememts in heap memory ie making the size of arraa biggger 

    delete []p ;// YOU HAVE TO CLEAR THE MEMORY BEFORE ASSIGNING TO NEW SIZE IF NOT WILLL LEAD TO MEMORY LEAK!!!!!

    p = new int[40];//pointing the pointer to new location in heap memory 
    




}