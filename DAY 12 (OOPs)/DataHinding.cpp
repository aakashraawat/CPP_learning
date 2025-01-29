/* DATA HINDING */

// Data in the class should be kept private: in the television u dont have access to the wrires such as is the data
// This is because if something is called and data is wrong blame will be on the class developer 


#include<iostream>
#include<cmath>


using namespace std ;


class Rectangle {  // initiallise a function
    // data to be worked on 

    private: // we make the data variables private so user cant input wrong no
    double length ;
    double breadth ;
    
    // Initiallise  functions and make them public so they can be used in the main function 
    
    public:
    // How to put values of l and b in private class
    // make a function to Set l = length same for breadth


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


// Areas and Perimeter 
    double area (){
        return length*breadth ;
    }

    double perimeter (){
        return 2*(length+breadth);
    }

    
};


int main (){

    Rectangle r ;// init a object 

    // use set functions to get the l and b 

    r.setLength(10);
    r.setBreadth(-100);

    cout <<r.getBreadth()<< endl ; // you can see the length to be chosen one


    cout << " Area of the rectangle is : " << r.area()<<endl;


   // Why do we prefer private memeber for the data paramater not public ??
   /* r.length = 10;
      r.breadth= -5 ; 
    // as a user idk if the area can be negative and it will give wrong result
    // while designing the class always thing about possible cases and make a good user interfrace wrt. the errors taken into account*/

    //cout << " Area of the rectangle is : " << r.area()<<endl;


}



/*MY PROGRAM WILL NEVER TAKE A NEGATIVE VALUE OF INTERGERS FOR THE AREA AND PERIMETER */