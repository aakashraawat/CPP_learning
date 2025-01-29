// CLASS vs Object

// CLass is coming from classification (Categories) based on common things 
// Object Car is class but all the diff brands who maufature car is objects bmw audi etc


// 
#include<iostream>
#include<cmath>

using namespace std;



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


    
}; // IMP : After class is finished you need to have the semi colon at the end !!!!


// use the class in the main function 
int  main (){

    // call the objects here :

    Rectangle r1,r2;// r1 and r2 are rectangle type / aquiring memory in slack

    // assigning the data to the new objects we hav to use . operator ie r1.legth = ...

    // you can only access the data in main if its in public class

    r1.length = 12.2 ,r1.breadth = 12.2 ;
    
    r2.length = 10 ,r2.breadth = 23 ;
    

// Now to get the areal use . operator again with function you want to use r1.perimeter()---
    cout << "Area of r1 is : " << r1.area() << endl; 


    double  r2a = r2.area() ;// you can make a new variable to reduce the name
    cout << "Area of r2 is  : " << r2a<< endl; 

    cout << "Perimeter of r1 is : " << r1.perimeter() << endl;





    return 0;
}