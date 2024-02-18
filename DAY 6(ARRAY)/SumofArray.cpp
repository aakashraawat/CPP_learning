#include <iostream>
#include <cmath>

using namespace std ;

int main ( )  {

    int Arr[7] = {4,8,6,9,5,2,7} ;

    int n =7 ,sum = 0;

    for ( int x : Arr ){

        sum = sum + x ;// 0+4 -- 4+8 .....

    }

    cout << "Sum of array is "<< sum << endl;







}

/*int main()
{
	int a[7]={4,8,6,9,5,2,7};
	int n=7,sum=0;
	    
	for(int i=0;i<7;i++)
	{
		sum=sum+a[i];
    }
        
	cout<<"sum is"<<sum;
	
	return 0;
	    
}*/