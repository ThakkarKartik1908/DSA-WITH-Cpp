//intersection of 2 array
#include<iostream>
using namespace std;

void intersection(int a1[],int a2[] ,int size){
    int i,j;
    cout<<"intersection"<<endl;
    for(i=0 ; i<size ; i++){
        for(j=0  ; j<size ; j++){
            if(a1[i]==a2[j]){
                cout<<a1[i]<<" ";
            }
        }
    }
}
int main(){
    int a1[5],a2[5],i,size=5;

    cout<<"enter array 1 element"<<endl;
    for(i=0;i<size;i++){
        cout<<"a1 at index "<<i<<":";
        cin>>a1[i];
    }

    cout<<"enter array 2 element"<<endl;
     for(i=0;i<size;i++){
        cout<<"a2 at index "<<i<<":";
        cin>>a2[i];
    }

    intersection(a1,a2,size);
    return 0;
}