// pass by reference(in cpp array are supported by this)
#include<iostream>
using namespace std;

void change(int arr[] , int size){
    for(int i=0 ; i<size ; i++){
        arr[i] = 2*arr[i];
    }
}

int main(){
    int arr[] = {5,6,7,8,9};
    int size = 5;
    change(arr ,size);

    for (int i=0 ; i<size ; i++){
        cout<<arr[i]<<endl;
    }

    return 0;
}