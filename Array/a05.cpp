// linear search
#include<iostream>
using namespace std;

int linear_search(int arr[],int size,int target){
    int i;
    for( i=0 ; i<size ; i++){
        if(arr[i]==target){
            cout<<"found at index "<<endl;
            return i;
        }
    }
    cout<<"Not found"<<endl;
    return -1;
}

int main(){
    int arr[5],i,target;
    int size = 5;
    cout<<"input"<<endl;

    for(i=0 ;i<size ;i++){
        cout<<"arr"<<i<<"=";
        cin>>arr[i];
        
    }
    cout<<"enter tragrt=";
    cin>>target;
    cout<<linear_search(arr,size,target);
    return 0;
}