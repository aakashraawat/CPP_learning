//Reversing a no ie 123 to 321 




// check weather its palindrome 1221 revrse is 1221 ie reverse didnt changed !!!
#include<iostream>  
#include <cmath>

using namespace std ;

int main (){

    int n , r , rev =0 ;

    cout <<"Enter the no to be reversed :";
    cin >> n ;
    int m = n ;

    while ( n>0) {

        r = n%10 ; //r = 1724 % 10 = 4
        n = n/ 10 ;// n = 1724/10 = 172 ie int division  
        rev = rev *10 + r ;//0 *10 +4 = 4 
        
        //cout <<r << endl ; //4 2 7 1



    } cout <<"Reverse of no is :"<< rev << endl ;

    if ( rev == m ){

        cout << "Its a PALINDROME :)"<< endl;

    } else cout << "Its not a PALINDROMW :(" << endl ;

    


}