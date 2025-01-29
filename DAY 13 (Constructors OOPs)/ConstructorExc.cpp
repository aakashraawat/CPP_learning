#include<iostream>
using namespace std;
    
class Rectangle
{
    private:
	int length;
	int breadth;
	    
    public:

    // 1st constructor !!

    // NON Argument Constructor 
	/*Rectangle()
	{
			
		length=2;
		breadth=1;

	}*/

    // 2nd constructor !!#

    // Paramterized constructors 


    Rectangle(int l =2 , int b=1 )// give the argument default value to combine 1 and 2 constructor 
    {   
        setLength(l);//use set functions to get the values 
		setBreadth(b);

    }



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





	        
int area()
	{
		return length*breadth;
	}
	
};
    
int main()
{   

    //Rectangle r1;-> first constructor is initi as there are no parameters in that constructors
	Rectangle r1(10,12); // this will activate the 2 constructor
    


    Rectangle r2(r1);// copy constructor -> used to copy the info in the r1 and use the same constructor as r1

	cout<<"Area of Rectange r1 "<<r2.area()<<endl;
	
	return 0;
	    
}