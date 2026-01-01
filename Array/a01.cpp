// Basic one dimension Array
#include<iostream>
using namespace std;

int main(){
    int marks[5],i;
    // int marks[5] = {1,2,3,4,5}
    cout<<"enter input"<< endl;
    for(i=0 ; i<5 ; i++){ 
        cout<<"marks"<<i<< "=";
        cin>>marks[i];
    }
    cout<<"output"<<endl;

    for(i=0 ; i<5 ; i++ ){
        
        cout<<"marks"<<i<< "=" << marks[i] <<endl;
    }
    return 0;
}