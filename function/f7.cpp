// pass by value
#include<iostream>
using namespace std;

int sum(int a,int b){
    a =a+10;
    b=+5;
    return a+b;
}

int main(){
    int a=5,b=6;
    cout<<"sum="<<sum(a,b)<<endl;
    cout<<"a="<<a<<endl<<"b="<<b;
    return 0;
}