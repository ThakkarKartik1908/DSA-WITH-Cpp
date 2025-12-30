#include<iostream>
using namespace std;

int main(){
    int i,n=4;
    for(i=0;i<n;i++){
        char k;
        for( int j=0;j<=i;j++){
            k=65+i;
            cout<<k;

        }
        cout<<endl;
    }
    return 0;
}