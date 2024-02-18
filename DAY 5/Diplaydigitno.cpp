#include<iostream>
#include <cmath>

using namespace std ;

int main (){

    int n, r ;
    cout << "which no you want the digit from :" << endl;
    cin >> n ;

    while ( n>0) {

        r = n%10 ; //r = 1724 % 10 = 4
        n = n/ 10 ;// n = 1724/10 = 172 ie int division  
        cout <<r << endl ; //4 2 7 1



    }







}