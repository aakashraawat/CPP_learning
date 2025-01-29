// constructors : Constructors. Constructors are methods that are automatically 
                    //executed every time you create an object

// Default Constructor/ Build in constructor  (Called if nothong is inti): 
// Non-Parameterized Constructor 
// Paramaterized Constructors
// Copy Constructor


#include<iostream>  
#include<cmath>

using namespace std ;


class Rectangle {  

    private: 
    double length ;
    double breadth ;
    
    // Initiallise  functions and make them public so they can be used in the main function 
    public:

    // initiallise a constructor


    Rectangle () {

        length  = 0 ;
        breadth = 0 ;

    }

        Rectangle(double l ,double b ){

            setLength(l);
            setBreadth(b);



        }

    























// this will decide weather the data is right or not by void set Length

// 1. Length 
    void setLength(double l){
        if (l>=0)// if +no  print itself
            length = l ;
        else length= l/-1;// else make it positive 
    }

// 2. Breadth
    void setBreadth ( double b ){
        if (b>=0)
            breadth = b ; // it will set b to breadth if conditiion lets the func do it
        else breadth= b/-1;
    }

// Just to check what is the chosen l and b for the program 



    double getLength(){
        return length;
    }

    double getBreadth(){
        return breadth;
    }


// Areas and Perimeter  (Funcions for calculating area and perimeter r)
    double area (){
        return length*breadth ;
    }

    double perimeter (){
        return 2*(length+breadth);
    }

    
};


int main (){

    Rectangle r ;// initiallise   a object 

    // use set functions to get the l and b 

    r.setLength(10);
    r.setBreadth(-100);

    cout<<"Breadth of triangle is: "<< r.getBreadth()<< endl ; // you can see the length to be chosen one


    cout << " Area of the rectangle is : " << r.area()<<endl;


  

}