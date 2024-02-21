// refrences are only available in c++ that makes it special 

#include <iostream>
#include <cmath>

using namespace std;


int main (){


    int x = 10 ;// initialize a variable

    int &y = x ; // & is a refernce and whenever u use it u must initiallise it right there !!!
    // y does not aquire memory its like a family sharing a car!!!ONLY one car i
     
    cout << *x << endl;


}