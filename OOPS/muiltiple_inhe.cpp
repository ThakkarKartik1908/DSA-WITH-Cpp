#include<iostream>
#include<string>
using namespace std;

class student {
public:
    string name;
    int rollno; 

};
class teacher{
public:
    string subject;
    double salary;

};

class TA : public student ,public teacher {
public:
        void getinfo(){
        cout<<"name: "<<name<<endl;
        cout<<"subject "<<subject<<endl;
        cout<<"rollno: "<<rollno<<endl;
        cout<<"salary: "<<salary<<endl;
    }

};
int main(){
    TA s1;
    s1.name ="kartik";
    s1.subject = "maths";
    s1.rollno = 19;
    s1.salary = 250000;

    s1.getinfo();
    return 0;
}