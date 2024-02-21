# include<iostream>
using namespace std;
    
/*program for binary search of array element

*/
int main()
{
    int a[10]={6,8,13,17,20,22,25,28,30,35};
 	int l=0,h=9,key,mid;
	cout<<"enter the key";// enter the no u are looking for 6,8,13,17
	cin>>key;
	while(l<=h)
	{
		
		mid=(l+h)/2;// mid point of the array 

		if(key==a[mid])
		{
			cout<<"found at"<<mid;// will let you know if the no is located at which position in the array
			return 0;
		}
		  else if(key<a[mid])
			h=mid-1;
		  else
			l=mid+1;
	}
	cout<<"not found";
	
	return 0;
}