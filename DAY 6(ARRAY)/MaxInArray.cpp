#include <iostream>
#include <cmath>

using  namespace std ;


int main () {

    int Arr[7] = {4,8,6,9,5,23,7} ;

    int n = 7 , max ;

  //  max = Arr[0]; // initilize max value to the first no of the array ie 4

    for ( int x : Arr){

        if (x > max) {

            max = x ;
        }

    } cout << "MAXIMUN no is :"<< max << endl;



}
///////////----------------------///////////
// old way to do it 
/*for(int i=0;i<7;i++)
	{
		if(A[i]>max)
		{
		    max=A[i];
		}
	}	
	cout<<"Maxmium no is"<<max;
	
	return 0;
	
}