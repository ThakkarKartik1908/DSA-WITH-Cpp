// size of array
#include<iostream>
using namespace std;

int main(){
    int arr[5];
    cout<<"size of array"<<endl;
    cout<<sizeof(arr)<<endl;

    cout<<"for each block"<<endl;
    cout<<sizeof(arr) / sizeof(int) ;

    return 0;   
}