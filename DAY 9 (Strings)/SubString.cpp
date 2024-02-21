// strstr(main,sub); : to check if the elements of one string is in the other eg. gram in program 
#include <iostream>
#include <cmath>


using namespace std ;


int main (){

    // initialize the arrays of string 
    char s1[20] = "Programming"; // Main string from where we will check if our substring exist in it 
    char s2[20] = "k" ; // substring to be checked 
    
    
    // Initiallize a if else statement to print not found if its not the sub set 

    if (strstr(s1,s2)!= NULL)// if the substring is presemt it will move on ie no null output
    
    cout <<strstr(s1,s2)<<endl;

    else // if the substring is not present in the main string it will print not found
        cout<< "NOT FOUND" <<endl;

    return 0;







}