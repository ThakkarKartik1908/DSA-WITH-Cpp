// calculate summ of digits of a number
#include<iostream>
using namespace std;

int digit_sum(int num){
     int n,sum=0;
     while(num>0){
        n=num%10;
        sum=sum+n;
        num=num/10;
     }
     return sum;
}
int main(){
    int s;
    s=digit_sum(124);
    cout<<s;
     return 0;
}