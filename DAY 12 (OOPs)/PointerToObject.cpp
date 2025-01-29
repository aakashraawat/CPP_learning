#include<iostream>
#include<cmath>


using namespace std ;


class Rectangle {  // initiallise a function
    // data to be worked on 

    public: // we have to access the data variable in the main function

    double length ;
    double breadth ;
    
    // Initiallise  functions

    double area (){
        return length*breadth ;
    }

    double perimeter (){
        return 2*(length+breadth);
    }


    
};
// Use pointer to point to the object !!!!

/*int main (){ 


    Rectangle r ;
    Rectangle *p;// dec
// use pointer to point to the object 

    p = &r ;// init pointer

    r.length =10 ;

    p->length= 10 ;// accessing member of operator using pointer ->

    p->breadth =20 ;

    cout <<"Area of r will be :"<< p ->area()<<endl; 
}*/
    // Create a object using heap memory 

    int main (){
        
        // 1,
        Rectangle *p ;// declaration 

        p = new Rectangle ; // new object in the heap memory

        // giving values to the pointer ie data l and b 
        p->length = 10 ;
        p->breadth = 20 ;

        cout<< "Area of P is "<< p->area ()<<endl;

        //2 .
        Rectangle *q ;

        q = new Rectangle;// always make the new object in heap before assigning the values to the parameters

        q->length = 90 ;
        q->breadth = 10 ;

        

        cout<< "Area of Q is "<< q->area ()<<endl;




    }







