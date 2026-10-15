#include<iostream>
#include<string>
using namespace std;

class student{
public:
    string name;
    double* cgpaptr;

    student(string name,double cgpa){
        this->name = name;
        cgpaptr = new double;
        *cgpaptr = cgpa;
    }
    student(student &obj){
        this->name = obj.name;
        this->cgpaptr = obj.cgpaptr;

    };

     // destructor automatically
    ~student(){
        cout<<"i am delete everything...."<<endl;
    }

    void getinfo(){
        cout<<"name:"<<name<<endl;
        cout<<"cgpa:"<<*cgpaptr<<endl;

    }
};


int main(){
    student s1("kartik",9.2);
    s1.getinfo();
    //student s1("neha",9.5);
    //*(s2.cgpaptr) = 9.8;
    //s1.getinfo(); not chnge 
    //problem in shallow cpoy  also default copy con. have same problem
    student s2(s1);
    *(s2.cgpaptr) = 9.8;
    s1.getinfo();
    cout<<"st2";
    s2.getinfo();

    return 0;
}