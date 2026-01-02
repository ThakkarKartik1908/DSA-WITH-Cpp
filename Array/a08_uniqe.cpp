//waf print uniqe value in array
#include<iostream>
using namespace std;

void uniqe_value(int a[],int size){
    bool uniqe;
    int i,j;
    
    for(i=0;i<size;i++){
        uniqe = true;
        for(j=0;j<size;j++){
            if(i!=j && a[i]==a[j]){
                uniqe = false;
            }
        }
        if(uniqe){
            cout<<a[i]<<" ";
        }
    }
}
int main(){
    int a[7],size = 7;

    for(int i=0;i<size;i++){
        cout<<"a"<<i<<"=";
        cin>>a[i];
    }

    uniqe_value(a,size);
    return 0;
}