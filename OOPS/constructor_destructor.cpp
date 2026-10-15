#include<iostream>
#include<string>
using namespace std;
// static
class Teacher{
public:
    string name ;
    string dept ;
    double salary ;

    Teacher(){
        cout<<"i'm non-parametrized counstructor..."<<endl;
        dept = "Computer Science";
    }

    Teacher(string name,string dept,double salary ){
        cout<<"i'm parametrized counstructor..."<<endl;
        this-> name = name; // name = n also use 
        this-> dept = dept;
        this-> salary = salary;
    }

    Teacher(Teacher &orgobj){ //pass by referance
        cout<<"copy constuctor..."<<endl;
        this-> name = orgobj.name; // name = n also use 
        this-> dept = orgobj.dept;
        this-> salary = orgobj.salary;
    }

    // destructor automatically

    ~Teacher(){
        cout<<"i am delete everything...."<<endl;
    }

    void getinfo(){
        cout <<"name :" <<name<<endl;
        cout <<"dept :" <<dept<<endl;
        cout <<"salary :"<<salary<<endl;
    }
};



int main(){
    Teacher t1;
    t1.name = "Kartik";
    //t1.dept = "computer";
    t1.salary = 250000;
    t1.getinfo();
    Teacher t2("hi","mech",10000);
    t2.getinfo();

    Teacher t3(t2);
    t3.getinfo();

    return 0;
}