// put a value / key from the array and program will the call the function and check for the place 

#include<iostream>
using namespace std;

int Search(int A[],int n,int key) // funtion A array, n 0 no of elements , which key 
{
	for(int i=0;i<n;i++)
    	if(key==A[i])// A[] is mean every element its gonna check with thekey 
        return i; // i means only the position not the data ie 0,1,2,3,4,5,6,7 in this code/array
    return 0;
}
    
int main()
{
	int A[]={2,4,5,7,10,9,13};// make an array
    int k;// key 
    cout<<"Enter an Element to be Searched:";
    cin>>k;// take the key as output

    // call the function for arra name A , no of elements n = 7 , Key is the value of no
    int index=Search(A,7,k);
    // int index is the place value of the data through the return value i;

// avoid print cout cin in the functiion 
    cout<<"Element found at index :"<<index<<endl;

}
    