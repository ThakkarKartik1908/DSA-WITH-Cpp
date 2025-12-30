// piramid
#include<iostream>
using namespace std;

int main(){
    int n,i,j;
    cout<<"enter number of row:";
    cin>>n;
    
    for(i=0;i<n;i++){
        // space
        for(j=0;j<n-1-i;j++){
            cout<<" ";
        }
        //first triangal
        for(j=1;j<=i+1;j++){
            cout<< j;
        }
        // second triangale
        for(j=i;j>=1;j--){
            cout<< j;
        }
        cout<<endl;
    }


    
    return 0;

}