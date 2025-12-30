//break and continu
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter number:";
    cin>>n;
    for(int i=1;i<=n;i++){
        if(i==3){
            continue;//skip the value
        }
        else if(i==5){
            break;// terminte the loop
        }
        else{
            cout<<i<<" ";
        }
    }
    return 0;
}