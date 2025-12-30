#include<iostream>
using namespace std;

int main(){
    int n;

    cout<<"enter no of line:";
    cin>>n;

    for(int i=1;i<=n;i++){// outerloop
        
        for(int j=1;j<=n;j++){// ineer loop
              
            cout<<j;
        }

        cout<<endl;
    }
    return 0;
}