#include <iostream>
#include<cmath>    
// alternate apporach for c++ 12 plus

using namespace std ;



int main() {

    int i , j ;
    int Arr[2][3]= {{2,4,6},{3,6,9}};// 2*3 matrix rows into columns 123

    for(auto& x: Arr) // i for rows down  always the first one [1]
    {

        for (auto& y:Arr ) //  arr second part [2]
        {

            cout<<y;// array first element for the row 






        } // for columns


        cout<<endl;






    }





}