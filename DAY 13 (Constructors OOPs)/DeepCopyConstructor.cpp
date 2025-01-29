#include<iostream>
#include<cmath>


using namespace std ;


class Test {

    public:

    int a; // 
    int *p;// 

    Test (int x){ // int x will be the parameter 

        a = x ;// assign a value to x ie 5

        p = new int[a] ; // now create an new array with size 5 

    }

    Test (Test &t) {

        a = t.a;
        p = t.p;

    }







} ; // After class ends ;;; !!!!!

int main (){

    Test t(5);
    Test t2(t);










    return 0;

}