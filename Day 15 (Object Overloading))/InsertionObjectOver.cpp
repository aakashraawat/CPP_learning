
#include<iostream>
using namespace std;

class Complex
{
    private:
	int real;
	int img;
	        
	public:
	Complex(int r=0,int i=0)
	{
	    real=r;
	    img=i;
	}
	void display()
	{
	    cout<<real<<"+i"<<img<<endl;
	}
	// function to print direct complex no from object 


	friend ostream & operator<<(ostream &out,Complex &c); // use friend cause we want to be ouside the main class
	
};
    
    ostream & operator<<(ostream &out,Complex &c)
    {
	    out<<c.real<<"+i"<<c.img<<endl;
	    return out;
    }
                
int main()
{
	Complex c(10,5);
	    
	cout<<c<<endl;
	    
	//operator<<(cout,c);
	    
}
    