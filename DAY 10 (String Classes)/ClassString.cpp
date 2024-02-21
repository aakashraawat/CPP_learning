#include<iostream>

#include <string>

using namespace std ;

int main ( )   {

    string str ; // object from the specific class

    cout<<"Enter a string"<< endl;
  //  cin >>str; will only take (hello )form hello world

    getline(cin,str) ;// will take all the things included spaces 


    cout<< str <<endl; // 


    return 0;
}