// create a pattern with nested for loops for no

#include<iostream>
using namespace std;
    
int main()
{
	int count=0;
	    
	for(int i=0;i<9;i++)
	{
	    for(int j=0;j<4;j++)
		{   
		    cout<<count<<" ";
		    count++;
	    }
	    int count = 0;
		cout<<endl;// ENDS THE LINE AFTER 4 ITERATION ARE DONE 
	}
	    
	return 0;
	
}