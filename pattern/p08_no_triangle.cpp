#include<iostream>
using namespace std;

int main(){
    int n,i,j;
    cout<<"enter number of row:";
    cin>>n;

    for(i=0;i<n;i++){

        for(j=0;j<=i;j++){  //0 to i+1

            cout<<" "<<i+1;

        }
        cout<<endl;
    }
    return 0;
}