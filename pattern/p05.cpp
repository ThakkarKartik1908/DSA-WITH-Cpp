#include<iostream>
using namespace std;

int main(){
    int num=1,n;// so that we decler here
    cout<<"enter no of row:";
    cin>>n;
    for(int i=0;i<n;i++){

        for(int j=0;j<n;j++){
           // here we decler than num=1 strat always
            cout<<num<<" ";
            num++;         
    }
  //  cout<<"num="<<num;
    cout<<endl;

    }
    cout<<"num="<<num;
}