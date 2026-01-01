//calculate sum and product of array
#include<iostream>
using namespace std;

void sum_product(int arr[],int size){
    int sum = 0,product = 1;

    for(int i=0;i<size;i++){
        sum = sum + arr[i] ;
        product = product * arr[i];
    }
    cout<<"sum of array element="<<sum<<endl;
    cout<<"product of array element="<<product<<endl;
}

int main(){
    int arr[5],size = 5;
    cout<<"enter five element:"<<endl;

    for(int i=0 ; i<5 ; i++){
        cout<<"arr"<<i<<"=";
        cin>>arr[i];
    }
    sum_product(arr,size);

    return 0;
}