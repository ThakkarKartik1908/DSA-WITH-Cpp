// home work problem
#include<iostream>
using namespace std;

int prime_num(int n){
     int count=0;
     for(int i=1;i<=n;i++){
        if(n%i==0){
            count++;
        }
     }
     if(count==2){
       cout<<"prime number"<<endl;
     }else{
        cout<<"not prime number"<<endl;
     }

}
int prime_series(int n){
    int count=0;
     for(int i=1;i<=n;i++){
        if(n%i==0){
            count++;
        }
     }
     if(count==2){
      return n;
     }
}
int fibo(int n){
  int a=0,b=1,c;
  cout<<"\nthe fibonacci series:";
  cout<<a<<","<<b<<"," ;
  for(int i=1;i<=n;i++){
    c=a+b;
    cout<<c<<",";
    a=b;
    b=c;
  }
}

int main(){
    int n,s;
    cout<<"enter number:";
    cin>>n;
    prime_num(n);
    /*for(int i=1;i<=n;i++){
      s=prime_series(i);
    cout<<s<<",";
    }*/
    fibo(n);
    return 0;
}