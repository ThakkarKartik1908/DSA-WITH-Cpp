//floyds pattern
#include<iostream>
using namespace std;

int main(){
    int n,i,j,k=1;
    cout<<"enter row:";
    cin>>n;

    for(i=0;i<n;i++){
        
        for(j=0;j<=i;j++){
            cout<<k;
            k++;

        }
        cout<<endl;
    }
    return 0;
}