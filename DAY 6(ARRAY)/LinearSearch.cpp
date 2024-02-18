/*linear search : finding the exact position of the no ib the array   */


#include<iostream>
using namespace std;

int main()
{
 	int A[10],n=10;
	int key;
	cout<<"Enter Numbers";
	    
	for(int i=0;i<n;i++)
	{
		cin>>A[i]; // input all the array no by keyboard ie 10 no
	}
	cout<<"Enter Key";// enter the value you are looking for ie which place in the array is it located
	cin>>key;
	    
	for(int i=0;i<n;i++)
	{
		if(key==A[i]) // no is in the list it will get the place
		{
			cout<<"Found at"<<i;
			return 0;
		}
	}
	    
	cout<<"Not Found";// if it iterates through the whole for loop without finding the value it will be not found
	
	return 0;
	    
}		