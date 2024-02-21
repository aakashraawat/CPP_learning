#include <iostream>
#include <cmath>


using namespace std ;

int main ( ){
    // TYPES OF STRING FUNCTIONS :
    // 1. strlen(str1): to know the length of the string 
    //char s[50]= "hello";

    char *s;

    cout << "Enter the string to be measured : "<< endl;
    cin.getline (s,100);// to get value if we have space in between our input string 

    cout << "length of the string is "<< strlen(s)<<endl;


    // 2. strcat(detination , source ) : concating two strings 
    // ex . destination : good 
    // source : morning 

    char s1[20]= "Good ";
    char s2[10]= "Morning";

    strcat(s1,s2); // joins the 2 strings and destination means which string it will be added 

    cout <<" The result is "<< s1 <<endl;// will add everything to the destination and you will get a combined output 
    
    
    // 3. Strcpy : copy one string to other use same concept as strcat
    // destination = empty stringarr
    // source = Hello 

    char s3[20] ;
    char s4 [20]= "Hello";

    strcpy(s3,s4);

    cout <<" After copying the destination ie. s3 = "<< s3 <<endl;










}