#include<iostream>
using namespace std;
    
class Complex
{
    private:
	int real;
	int img;
	        
    public:
	Complex(int r=0,int i=0) // call the defualt and para. constructors 
	{
		real=r;
	    img=i;
	}
	            
	void display() // display function 
	{
		cout<<real<<"+i"<<img<<endl;
	}
	            
	friend Complex operator+(Complex c1,Complex c2);// not a inline functiom
	
};
    
    Complex operator+(Complex c1,Complex c2) // global function
    {
	    Complex temp;// dout in this part
	    temp.real=c1.real+c2.real;
	    temp.img=c1.img+c2.img;
	    return temp;
    }






int main()
{
	Complex c1(5,3),c2(10,5),c3;
	c3=c1+c2;
	    
    c3.display();
    	
}
    