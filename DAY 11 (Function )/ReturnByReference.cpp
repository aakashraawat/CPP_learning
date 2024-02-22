#include <iostream>

using namespace std ;

/*
int & fun(int &x)
{
    return x;
}

int main ()
{
    int a = 10 ;
    fun(a) = 25w;

    cout<<a<<endl;

}*/

int &fun(int &a)
{
    cout <<a<<endl;// the x value will run through this function and give us value of x =10
    return a;

}


int main (){

    int x = 10;// take the value of x and go to the function
    fun(x)= 25 ; // you can use it as a right hand side variable and use some other value for function this is return by reference 
    cout <<x <<endl;

}