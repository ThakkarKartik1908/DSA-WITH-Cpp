// sum of 1 to n number
#include<iostream>
using namespace std;

int sumof_n(int n){
    int i,sum=0;
    for(i=1;i<=n;i++){
        sum=sum+i;
    }
    return sum;
}
int main(){
    int n,s;
    cout<<"enter number:";
    cin>>n;
    s=sumof_n(n);
    cout<<"sum="<<s;
    return 0;
}