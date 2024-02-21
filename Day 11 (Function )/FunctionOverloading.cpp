#include<iostream>
#include<cmath>

using namespace std ;

// In c++ you can use same funtion name with different paramater and c++ can easily ditinguish this is called function overloading 
// you cant!!! overload a function like this example --> int max(double x , double y) || u cant have same type and same parameters its not  function overloading

//function overloading means using same function name and diff parameter ie int max(x,y,z) && int max(x,y).

// 2 int sum
int add (int x , int y){

    return x+y;

}



// 3 int sum
int add (int x , int y, int z){

    return x+y+z;
}



// double sum (2)
double add (double x , double y){

    return x+y;

}


int main (){

    int a = 10 ,b=5 , c ,d ;
    double e;// store as double too as the fucntion is double 

    c = add (a,b);

    d = add(a,b,c);

    e = add(4.5,3.4);

    cout << e << endl;




    return 0;
}