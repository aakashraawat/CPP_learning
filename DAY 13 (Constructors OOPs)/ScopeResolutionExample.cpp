#include<iostream>
#include<cmath>


using namespace std ;


class Rectangle{

private :

    int length;
    int breadth;

public:
    // Constructors :
    Rectangle() ;

    Rectangle(int l , int b);

    Rectangle(Rectangle &rec); // copy constructor


//Inline functions
    int getLength(){return length;};// reading the properties
    int getBreadth(){return breadth;};

    void setLength (int l);// modifying the parameters (MUTATORS)
    
    void setbreadth(int b);

// FASCI(ATUAL FUNCTION)
    int area();
    int perimeter();

// INQUIRY FUNCTION : IS IT EVEN A RECTANGLE OR NOT ?
    bool isSquare();


//DESTRUCTOR -> DELLOCATION OF AN OCJECT 
    ~Rectangle();



};



int main (){

    Rectangle r1(10,20) ;// call an object from class and give parameters

    cout<<"Area of r is : "<<r1.area()<<endl;

    if (r1.isSquare())
        cout<<"Yes it is a square"<<endl;

    else 
        cout <<"Its a rectangle"<<endl;



    return 0;
}


// WE DONT WANT ANY INLINE FUNCTION SO WE WILL WRITE THE PROCESS OUTSIDE!!!

// contructors

Rectangle::Rectangle()
{
    length = 1;
    breadth = 1;
}

Rectangle::Rectangle (int l , int b){

    length = l;
    breadth = b;

}

Rectangle::Rectangle(Rectangle &rec)// copy constructor 
{
    length = rec.length;
    breadth = rec.breadth;
}

/*------------------------------------------------------*/

void Rectangle::setLength (int l){

    length = l ;

}

void Rectangle::setbreadth (int b){

    breadth = b;
}


/*------------------------------------------------------*/



int Rectangle::area(){
    return length*breadth;
}

int Rectangle::perimeter(){
    return 2*(length+breadth);
}


bool Rectangle::isSquare(){  // to check if its a sqaure only true when both sides are equal
    return length==breadth;
}


Rectangle::~Rectangle(){

    cout<<"Rectangle Destroyed !!!!! "<< endl;
}
