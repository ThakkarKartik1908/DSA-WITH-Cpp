#include<iostream>
#include<string>
using namespace std;

void fun(){
    static int  x = 0;
    cout<<"x:"<<x<<endl;
    x++;
}
class A{
public:
   int x;
   void xinc(){
    x = x+1;
    cout<<x<<endl;
   } 
};
int main(){
    A obj1;
    A obj2;
    obj1.x = 100;
    obj2.x = 200;
    cout<<obj1.x<<endl;
    obj1.xinc();
    cout<<obj2.x<<endl;
    obj2.xinc();
    fun();
    fun();
    fun();
    return 0;
}