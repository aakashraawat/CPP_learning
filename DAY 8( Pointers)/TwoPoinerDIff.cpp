#include <iostream>
#include <cmath>


using namespace std;


int main () {

    int A [5]= {2,4,6,8,10};
    int *p = A, *q = &A[4]; // p is pointing on the 1s element q is ponting to the 4 element of the array 


    cout << p-q ;// 4 elements from each other (+,-) shows which side is it 



}
