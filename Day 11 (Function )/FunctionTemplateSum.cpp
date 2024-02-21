#include<iostream>
#include<cmath>

using namespace std ;


template<class S>// start a template name S for the sum of any data  types
// Write a function to display any kind of addition 1,2 3 digit in one function only



// put default arguments as 0 so we dont have error when calling that place with nothingh



S Sum (S x=0 , S y=0 , S z = 0){

    return x+y+z;
}


int main (){


    int c = Sum( 0,2,4 );

    cout<< "Sum is : "<< c<< endl;



    double  d = Sum(0.1 , 0.1 ,  7.7);

    cout<< "Sum is : "<< d<< endl;



    float e = Sum( 2.43f ,4.65f, 3.45f);

    cout<< "Sum is : "<< e<< endl;






    return 0;
}