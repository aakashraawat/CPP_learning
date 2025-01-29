// imagine there is complete class written but we will focus on Fascillators 
// ie function which used data from private members of class such as area , speed etc


#include<iostream>
#include<cmath>

using namespace std ;



class Rectangle {

    private:// init the varaibles to be used in main 

    int length ;
    int breadth ;

    public :

    // Assume everthing is there in the class access , mutatators etc

    // Fascillators

    //1. Function to calculate area 
    int area(){            // 1ST METHOD /(INLINE FUNCTION)

        return length*breadth ;//(No complex logic should be used like in this ex its simple)
    }   

    // Prototype of function
    int perimeter() ; // Init a permiter function but do not write the actual function here 


};

// Actual working of function outside

// Type Class::PrototypeFunction
int Rectangle::perimeter(){
    return 2*(length+breadth) ;
}
// Always try to write the function outside if the logic is tough its the the best practic avoid inline functions





int main (){

    // init a object 

    Rectangle r(10,5);

// now u can use the object to use diff functions in class
    cout<<r.area()<<endl;
    cout<<r.perimeter()<<endl;




    

}