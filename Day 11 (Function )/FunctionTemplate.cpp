/*Write a funtion to add ( any kind of data type int double float in one function) instead of writing 2 diff functions*/
//FUNCTION TEMPLATE

#include<iostream>
#include<cmath>

using namespace std ;


template<class T>//Intitialise a New template (New class)!!


// Define a template function
T maxi(T x , T y){ // u have use as the 'T'ie your template name

    if (x>y)
        return x;
    else 
        return y;


}
T add (T x , T y){

    return x+
}



int main(){

    int c = maxi(10,7);

    cout<< "GREATER NO IS: "<< c<< endl;

    double d = maxi(12.4 ,12.9);

    cout<< "GREATER NO IS: "<< d<< endl;

    float e = maxi(23.6f , 29.5f);

    cout<< "GREATER NO IS: "<< e<< endl;









    return 0;
}