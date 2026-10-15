#include<iostream>
#include<string>
using namespace std;

class person{
public:
    string name;
};
class student : public person {
public:

    int rollno; 

};
class teacher : public student{
public:
    string subject;
    double salary;
    void getinfo(){
        cout<<"name: "<<name<<endl;
        cout<<"subject "<<subject<<endl;
        cout<<"rollno: "<<rollno<<endl;
        cout<<"salary: "<<salary<<endl;
    }

};


int main(){
    teacher s1;
    s1.name ="kartik";
    s1.subject = "maths";
    s1.rollno = 19;
    s1.salary = 250000;

    s1.getinfo();
    return 0;
}