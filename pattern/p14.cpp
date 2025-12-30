// invers triangale
#include<iostream>
using namespace std;

int main(){
    int i,n,j,s;
    cout<<"enter row:";
    cin>>n;

    for(i=0;i<n;i++){
       // space also use j
        for(s=0;s<i;s++){
            cout<<" ";
        }
        // num also use j=0 to j=n-i
        for(j=i;j<n;j++){
            cout<<i+1;
            
        } 
        cout<<endl;
    }
    return 0;
}