#include<iostream>
#include<cmath>
#include<string>

using namespace std ;



class Student{

    private:

    int roll;
    string name;

    int mathMarks;
    int phyMarks;
    int chemMarks;

    public :

    // put parameters in the constructor

    Student(int r , string n , int m ,int p ,int c ){ // inline function 

        // put the private variable in public

        roll=r;
        name=n;
        mathMarks=m;
        phyMarks=p;
        chemMarks=c;


    }

    // function for total marks  

    int totalMarks(){
        return mathMarks+phyMarks+chemMarks;
    }


    // function for the grade 

    char grade( ) { // use char as grades are in one character ie A , B ....

        float average = totalMarks()/3;
        // creat a nested loop for the conditions given
        if(average > 60)
            return 'A';
        else if(average>=40 && average<60)
            return 'B';
        else
            return 'C';



    }




};


int main (){


    int roll;
    string name;
    int m,p,c;
    
    cout<<"Enter Roll number of a Student: ";
    cin>>roll;

    cout<<"Enter Name of a Student:";
    cin>>name;

    cout<<"Enter marks in 3 subjects";
    cin>>m>>p>>c;
// Initialize an object from the class Student
    Student s(roll, name, m, p, c);

    cout << "Total Marks: " << s.totalMarks() << endl;

    cout<<"Grade of Student:"<<s.grade()<<endl;






    return 0;
}