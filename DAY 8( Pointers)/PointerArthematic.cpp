// Pointers Arthematic 


#include <iostream>
#include <cmath>

using namespace std ;


int main () {

    int A [5] = {2,4,6,8,10};// array with 5 elements 


    int *p = A ; int *q = &A[3];// make a pointer point on the array A

    cout << *p << endl;//2

    p++;

    cout << *p << endl;//4

    p--;
    cout << *p << endl;//2

    p= (p+2) ;
    cout <<p;





    // 5 opertations allowed with pointers  p++ ,p-- 

    //p++ = it means it will go one place such as 2 ++p is 4 by place but in pointer it p++ takes the next memory ie memory of 4 = 2/3
    //p-- = it works same is p++ just backward
    
    // p= p+2 if the current pointer pointing on 4 ie 202 it will go to 2 space further ie 8 
    // p = p-2 same as above 


    //d = q - p when u substract 2 pointers 206(q)- 200 / 2 will give the distance between 2 pointersjkkkmjkmj ´






}