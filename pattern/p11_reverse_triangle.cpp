// revers number triangal
#include<iostream>
using namespace std;

int main(){

    int n,i,j;
    cout<<"enter row:";
    cin>>n;
    for(i=0;i<n;i++){
         
        for(j=i+1;j>0;j--){
            cout<<j;

        }
        cout<<endl;
    }
    return 0;
}