#include<iostream>
using namespace std;

void binary_decimal(int n){
    int rem,ans=0,pow=1;
    while(n>0){
        rem=n%2;
        n=n/10;
        ans=ans+(rem*pow);
        pow=pow*2;
    }
    cout<<"decimal number:";
    cout<< ans<<endl;
}

void power(){
    int b,pow,c=1;
    cout<<"enter number:";
    cin>>b;
    cout<<"enter power:";
    cin>>pow;
    
    for(int i=1;i<=pow;i++){
       c=c*b; 
    }
    cout<<c;

}

int main(){
    int choice;
    cout<<"enetr what you do\n1.calculate binary to dicimal\n2.calculate power"<<endl;
    cin>>choice;
    if(choice==1){
    int num;
    cout<<"enter number:";
    cin>>num;
    binary_decimal(num);
}else if(choice==2){

    power();
    
}
    return 0;
}