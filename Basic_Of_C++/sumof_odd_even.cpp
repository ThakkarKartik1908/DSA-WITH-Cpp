// sum of odd number also even
#include<iostream>
using namespace std;

int main(){
    int num,sum=0,evensum=0;
    cout<<"enter number:";
    cin>>num;
    for(int i=1;i<=num;i++){

            if(i%2!=0){
                sum=sum+i;   
            }
            if(i%2==0){
                evensum+=i;
            }
    }
    cout<<"oddsum="<<sum;
    cout<<"\nevensum="<<evensum;

}