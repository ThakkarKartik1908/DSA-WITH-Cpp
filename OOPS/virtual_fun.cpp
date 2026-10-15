#include<iostream>
#include<string>
using namespace std;
class Parent {
public:
    void getinfo(){
        cout <<"parent class"<<endl;
    }

    virtual void hello(){
        cout <<"hello from parent"<<endl;
    }

};

class Child : public Parent {
public:
    void getinfo(){
        cout <<"child class"<<endl;
    }

    void hello(){
        cout <<"hello from child"<<endl;
    }


};


int main(){
   
    Child c1;
    c1.hello();

    return 0;
}