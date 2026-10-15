#include<iostream>
#include<string>
using namespace std;

class ABC{
public:
    ABC(){
        cout<<"constuctor"<<endl;
    }
    ~ABC(){
        cout<<"destuctor"<<endl;
    }
    
};
int main(){
    if(true){
        static ABC obj1;
    }
    
    cout<<"end of fun.."<<endl;
    return 0;
}