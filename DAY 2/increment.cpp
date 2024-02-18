#include<iostream>
#include<cmath>

using namespace std ;

int main (){


    int i = 5 , j;

    j = i++ ; // assigns value first and than increment
    cout << "Value of i is "<< i << endl;

    cout << "Value of j is "<< j << endl;  

    j = ++i ;//increment first and than assign

    cout << "Value of j is "<< j << endl;  

    cout << "Value of i is "<< i << endl;
   
    // i = 7 and j = 7

    j = 2 * i++ + 2* ++i ;// 32

    cout << "Value of i is " << i << " and "<< "value of j is : "<< j <<endl;


}