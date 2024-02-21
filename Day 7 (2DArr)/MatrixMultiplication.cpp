// DO NOT FORGET THE LIBRARIES !!!!!

#include<iostream>
#include <cmath>
using namespace std;

int main()
{
    int A[3][2]={6,5,6,5,6,5}; // 2*3 matrix rows*coulumns * 2*3 as inside one is not same
	int B[2][3]={1,2,1,2,1,2};
	//int C[2][3];


	cout<< "Matrix A"<<endl;    
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<2;j++)
		{
			cout << A[i][j];// Display matrix A
		}
        cout << endl; // give space after a row is completed
	}
    cout<< "Matrix B"<<endl;    
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout << B[i][j];// display matrix b
		}
        cout << endl;
	}

    int sum ;
    cout<< "Matrix Multiplication"<<endl;    
	for(int i=0;i<3;i++) // no of rows of matrix A
	{ 
		for(int j=0;j<3;j++)//no of colummns in  matrix B
		{ 
            sum = 0;
            for (int k =0 ;k<2;k++){// no of columns in matrix A ie 3{
			    
                sum = sum + A[i][k] * B[k][j] ;


		    } 


            cout <<sum << " " ;
        
        }
        cout << endl;



	}
}   
	