// finding a prime no ie only have two factors

#include<iostream>
#include <cmath>

using namespace std ;

int main (){

    int i , n , count = 0 ;

    cout << " Enter the no you wanna check if its prime or not: " << endl;
    cin>> n ;

    for (i=0 ;i <=n ; i++ ){

        // check how many no its divisible by

        if (n%i ==0 ) {   // remainder is 0 checking if your input no is divisible by all the no before it

            count++;// adding it to the counter


        }  




    } if (count == 2) cout << "Its a prime no "<< endl;// if its only 2 no, 1 and itelf ie prime / 2 factors

        
        else 
            cout<<"Its NOT a prime no !!"<< endl;// if more than 2 on count not prime




}