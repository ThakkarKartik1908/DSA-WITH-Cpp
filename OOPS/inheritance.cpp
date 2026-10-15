#include<iostream>
#include<string>
using namespace std;
// single level
class person{
public:
    string name;
    int age;

    person(string name,int age){
        this->name = name;
        this->age = age;
    }
   //person(){
   // cout<<"Parent constuctor"<<endl;
   //}
   ~person(){
    cout<<"Parent destuctor"<<endl;
   }
};
// private mode person not access by main
class student : public person{
public:
    int rollno; 

    //student(){
      //  cout<<"child constuctor"<<endl;
    //}
    student(string name,int age,int rollno) : person(name,age){
      this->rollno = rollno;  
    }
    ~student(){
    cout<<"chlid destuctor"<<endl;
   }
    void getinfo(){
        cout<<"name: "<<name<<endl;
        cout<<"age: "<<age<<endl;
        cout<<"rollno: "<<rollno<<endl;
    }
};
int main(){
    student s1("k",21,19);
   // s1.name = "thakkar";
   // s1.age = 21;
   // s1.rollno = 19;
    s1.getinfo();
    return 0;
}
