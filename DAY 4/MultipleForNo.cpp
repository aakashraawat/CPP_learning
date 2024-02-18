//make a multiplication table usually use for loop for counter i used while my bad 

#include <iostream>
#include<cmath>

using namespace std ;


int main (){

    int n , i=1 ;
    cout <<"enter which number table you want :"<< endl;
    cin>> n ;

    while (i <=10 ) {
        int result = i * n;
       cout<< n <<"x"<< i << " = "<< result <<endl;
       i++;
    }



}