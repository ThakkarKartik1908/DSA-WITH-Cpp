// Reverse Array by 2 pointer method
#include<iostream>
using namespace std;

void reverse_arr(int arr[],int size){
    int start = 0 , end = size-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++,end-- ;
    }
}

int main()
{
    int arr[] = {1,2,3,5,6,7};
    int size = 6;

    reverse_arr(arr,size);
    cout<<"reverse array"<<endl;
    for(int i=0 ; i<size ; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}