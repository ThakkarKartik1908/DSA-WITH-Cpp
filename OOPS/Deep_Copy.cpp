#include<iostream>
#include<string>
using namespace std;
// when dma we use ddep copy
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
        // change
        cgpaptr = new double;
        *cgpaptr = *obj.cgpaptr;

    };
    
    // destructor automatically
    ~student(){
        cout<<"i am delete everything...."<<endl;
        delete cgpaptr; // manually delete dma
    }

    void getinfo(){
        cout<<"name:"<<name<<endl;
        cout<<"cgpa:"<<*cgpaptr<<endl;

    }
};


int main(){
    student s1("kartik",9.2);
    s1.getinfo();
    student s2(s1);
    *(s2.cgpaptr) = 9.8;
    cout<<"st1"<<endl;
    s1.getinfo();
    s2.name = "harshil";
    cout<<"st2"<<endl;
    s2.getinfo();

    return 0;
}