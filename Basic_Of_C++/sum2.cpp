//sum by while
#include<iostream>
using namespace std;

int main(){
    int n,i=1,sum=0;
    cout<<"enter number:";
    cin>>n;
    while(i<=n){
        sum+=i;
        i++;
    }
    cout<<"sum="<<sum;
    return 0;
}