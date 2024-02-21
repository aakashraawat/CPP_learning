// string as tokens strtok(str1 ,"= ;") : key value payer x is the key 10 is the value seprated by ; ie x=10 ;

#include <iostream>
#include <cmath>

using namespace std ;


int main () {


    char s1 [20] = "x=10;y=20;z=35" ;

    // 
    char *token = strtok(s1, "=;");

    while (token !=NULL){
        
        cout<<token << endl;

        token =strtok (NULL,"=;");// skip the = And ; and move on the loop



    }

   ;


    return 0;
}


