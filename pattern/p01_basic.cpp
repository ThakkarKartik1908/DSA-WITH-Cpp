// row and column
#include<iostream>
using namespace std;

int main(){
    int n,m,i,j;
    cout<<"enter row:";
    cin>>n;// number of line 
    cout<<"enter colume:";// number of element
    cin>>m;
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}