// Structure is a just like a class 
// main difference is by default everything is public

#include<iostream>
using namespace std;
    
struct Demo
{
    
	int x;
	int y;
	    
    void display()
 	{
		cout<<x<<" "<<y<<endl;
	}
	
};
    
int main()
{
	Demo d;
	d.x=10;
	d.y=20;
	d.display();
	    
}
    