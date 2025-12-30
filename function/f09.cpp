//binomial cooficiant nCr
#include<iostream>
using namespace std;

int fact(int num){
    int fact=1;
    for(int i=1;i<=num;i++){
        fact=fact*i;
    }
    return fact;
}

int nCr(){
    int n,r,nCr;
    cout<<"enter n:";
    cin>>n;
    cout<<"enter r:";
    cin>>r;
    nCr= fact(n)/(fact(r)*fact(n-r)) ;
    cout<<"the binomiale coeficiant="<<nCr;
}

int main(){
     nCr();
     return 0;
}