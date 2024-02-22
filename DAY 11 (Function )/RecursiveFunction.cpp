//Recursive function : Which calls itself

#include <iostream>
#include <cmath>


using namespace std ;


void fun(int n){

    if (n>0){

        cout<< "Value of n is :"<< n <<endl ;
        fun(n-1); // it will substract 1 from the n 
        // it will keep on doin this until n=0 so until 1 
        // always have a condition so it can end easy way for repeated tasks


    }

}


int main ( ){

    int x = 5;// 1. first check if 5>0 if it is it will print 5
    // 2 .pass through funct (n-1) ie 4 
    //3. 4 goes through the fucntion again cause its fun(n-1) not n +=1
    //4. it will keep repeating until condition is false ie n>0 so first 5 ->4->3->2->1 that it will stop

    fun(x); // call the function with int value 5 










    return 0;
}


