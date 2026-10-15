#include<iostream>
#include<string>
using namespace std;
class Parent {
public:
    void getinfo(){
        cout <<"parent class"<<endl;
    }

};

class Child : public Parent {
public:
    void getinfo(){
        cout <<"child class"<<endl;
    }

};


int main(){
    Parent p1;
    p1.getinfo();
    Child c1;
    c1.getinfo();

    return 0;
}