// how to initiallise c++ array/ for each loop ( auto x : arr)
#include <iostream>

using namespace std ;


int main ( ){

    int arr[]={6,3,4,6,7,8}; // initiallizing an array 5 digits in slack memory 


    for ( int x : arr) {   // (each x in arr!!)for all the no in arr it will go through all the array members 
   // alternate : for ( auto x : arr) {  ie. auto automatically takes the variable type for easier approach
        cout<< x << endl;

    }




}