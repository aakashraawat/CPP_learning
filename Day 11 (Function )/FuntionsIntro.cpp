/*Funxtion intro : how to initillise fuction and call themm */
//(output)->return type (input)-> function_name (parameter list)
// if output is nothing use void

// When function is called stack memory is used to store the data and later its removed when the fuction ends

#include <iostream>
#include <cmath>
#include <string>


using namespace std ;



// 1. write a fuction named as display to show a display text 

void display(){

    cout<<"Hello "<<endl;

}

// 2. write a function for adding two Numbers

double sum(double x , double y){

    double z ; // variable to store the sum
    z = x + y;// sum of the numbers
    
    //cout<< z <<endl; NOT TO USE COUT IN FUNCTION!!!!
    
    return z ; // value to be returnes as if in this ex we need the sum

}


int main ( ){


    // call the function inside the main fuction access 

    display();
// Call the funtion for the desired two integers for the addition ie sum function
    double c = sum (6.4 , 7.3);// store the value of the function in a variable named c to later print the result

    cout <<"The result of the addition is : "<< c <<endl;
   










    return 0;

}