#include<iostream>
#include<string>
using namespace std;

class person{
public:
    string name;
    int age;

};

class student : public person{
public:
    int rollno; 

};
class gradstudent : public student {
public:
    string researchArea;

        void getinfo(){
        cout<<"name: "<<name<<endl;
        cout<<"age: "<<age<<endl;
        cout<<"rollno: "<<rollno<<endl;
        cout<<"researchArea: "<<researchArea<<endl;
    }

};
int main(){
    gradstudent s1;
    s1.name ="kartik";
    s1.age = 21;
    s1.rollno = 19;
    s1.researchArea = "physics";

    s1.getinfo();
    return 0;
}