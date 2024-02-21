// strchr(main,char) :Find occrunce of a letter in a string
// strRchr (main,char ):(right to left )  check the occuranve from the right hand side ie g-- n-- i...... so on from right to left
#include <iostream>

using namespace std ;


int main (){

    char s1[20] = "Programming";
   // if (strvchr(s1,s2)!= NULL)

   // checks from left to right ie p--r--0-....... : strchr
    cout << strchr(s1,'g')<< endl ;
    // checks from right to left : strrchr
    cout << strrchr(s1,'g')<< endl ;




}