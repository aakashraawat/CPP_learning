// Return By Address  : we can return address of heap memory


#include<iostream>
#include <cmath>


using namespace std;

int * fun (){
    int *p = new int [5]; // creating an array in heap memory with 5 elements
    for (int i = 0 ; i <5 ; i++){ // loop from 0 to 5 and multiply it by 5 for every element 0*5,1*5,2*5
            p[i]= 5*i;
    }   
        cout<<p<< endl;// address of thr pointer 

    return p;
    
    }





int main (){

    int *q = fun();


    cout<<q<<endl;
    for (int i=0 ;i<5;i++)
        cout <<q[i]<<endl;




    return 0;
}