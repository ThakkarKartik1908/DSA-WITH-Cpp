#include<iostream>
using namespace std;

void decimal_binary(int n){
    int r,ans=0,pow=1;
    cout<<"Decimal number:";
    while(n>0){
        r=n%2;
        n=n/2;
        ans=ans+(r*pow);
        pow=pow*10;
    }
    cout<<ans; 
}

int main(){
 int num;
 cout<<"enter number:";
 cin>>num;
 decimal_binary(num);
 return 0;
}
