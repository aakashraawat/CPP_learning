//Various operators are availablr for different data types 

#include<iostream>


using namespace std ;

class Complex{

    public :

    int real;
    int img ; 

    
    // call a constructor 
 // make them also the default if there is no value they are 0

    Complex(int r = 0 , int i= 0 )
    {
    // assign the paramaters
        real = r ;
        img  = i ;

    }


    Complex add(Complex x) /// operator+ can be used
    {
        Complex temp ;// storing temprary .. Take the money and add and give the result

        temp.real = real+x.real;
        temp.img = img+x.img ;


        return temp ;

    }





};


int main ( ){

    Complex c1,c2,c3 ;

    c1.real=5 ;c1.img =7 ;

    c2.real=10 ;c2.img =5 ;

    c3 = c1.add(c2) ;// use the old way 

    // new way is using operator+ and c3 = c1+c2 u just have to know how to implement the addition
    // remember example :taking money from friend and countunf






   

    cout<<c3.real<<"+i"<<c3.img<<endl;


    return 0;

}