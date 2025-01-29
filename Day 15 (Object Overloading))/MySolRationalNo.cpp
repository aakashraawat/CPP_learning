#include<iostream>
using namespace std;
class rational

{
    public:
    
    int num;
    int deno;

    rational(int n=1, int d=1)
    {
        num=n;
        deno=d;
    }
    friend ostream & operator<<(ostream &out, rational &a);
    friend rational  operator + (rational x, rational y);
};

// for dispalying insertion object overloading 
ostream & operator<<(ostream &out, rational &a)
{
    out<<a.num<<"/"<<a.deno;
    return out;
}


// for the calculation
rational operator+(rational x, rational y)
{
    rational t;

    t.num=(x.num)*(y.deno)+(y.num)*(x.deno); // 


    t.deno=(x.deno)*(y.deno); // 
    return t;
}
 
int main(){
    rational a(1,3);
    //cout<<a<<endl;
    rational x(2,3);
    rational y(3,4);
    rational b;
    b=x+y;
    cout<<"Sum of x = "<<x<< " and y = "<<y<<" is = "<<b.num<<"/"<<b.deno<<endl;
    return 0;
}
