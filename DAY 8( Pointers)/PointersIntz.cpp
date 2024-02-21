#include <iostream>
#include <cmath>


using namespace std;


int main () {

    int A [5]= {2,4,6,8,10};
    int *p = A;

    for (int i=0 ; i <5 ; i++ ){

        cout<< A+i << endl;// display the address
      


    } for (int i=0 ; i <5 ; i++ ){

        
        cout << *(A+i)<< endl;;// display the actual values of the location at the adress
        cout << *(p+i)<<endl;// INSTEAD OF ARRAY NAME YOU CAN USE PONTER NAME TOO*/

    }



}