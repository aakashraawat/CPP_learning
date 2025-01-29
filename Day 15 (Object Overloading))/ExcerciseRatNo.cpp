// what is concept of this->
//in Rational number s = 7/3 and r=4/5 , when we write s+r , there are 2 p's(7 and 4) and 2 q's(3 and 5)
/*   

    in t.p=this->p*r.q+this->q*r.p;

this->p means 7

and this->q means 3

and r.p means 4 and

r.q means 5
in t.p=this->p*r.q+this->q*r.p;

this->p means 7

and this->q means 3

and r.p means 4 and

r.q means 5*/



#include<iostream>
using namespace std;

class Rational
{
    private:
    int p;
    int q;
            
    public:
    Rational() // default constructors
    {
        p=1;
        q=1;
    }
                
    Rational(int p,int q)// param constructor 
    {
        this->p=p;
        this->q=q;
    }
                
    Rational(Rational &r)
    {
        this->p=r.p;
        this->q=r.q;
    }




    int getP(){return p;}// mutators
            
    int getQ(){return q;}
            


    void setP(int p) // accessors modify the parameters
    {
        this->p=p;
    }
                
    void setQ(int q)
    {
        this->q=q;
    }
                
    Rational operator+(Rational r)
    {                                   // p/q is rational form 
        Rational t;                     // this->p = num and this->q = den
        t.p=this->p*r.q+this->q*r.p; // t.p  (numerator) = num *r.q + den *r.p 
        t.q=this->q*r.q;
        return t;
    }
    
    
    friend ostream & operator<<(ostream &os,Rational &r);
    
};
    
    ostream & operator<<(ostream &os,Rational &r) // insertion object overloading
    {
        os<<r.p<<"/"<<r.q;
        return os;
    }
                
int main()
{
    Rational r1(3,4),r2(2,5),r3;
    r3=r1+r2;
    cout<<"Sum of "<<r1<<" and "<<r2<<" is "<<r3<<endl;

}
    