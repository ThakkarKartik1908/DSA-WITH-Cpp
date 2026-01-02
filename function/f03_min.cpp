// min of two number
#include<iostream>
using namespace std;

int min(int n1,int n2){
    if(n1<n2){
        return n1;
    }else{
        return n2;
    }
}
int main(){
    int n1,n2;
    cout<< "enter n1:";
    cin>>n1;
    cout<< "enter n2:";
    cin>> n2;
    cout<<"minimum of two number " <<min(n1,n2);

}