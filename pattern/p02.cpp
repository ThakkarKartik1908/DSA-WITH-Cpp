// squre pattern for n=4
#include<iostream>
using namespace std;

int main(){
    int n;

    cout<<"enter no of line:";
    cin>>n;

    for(int i=1;i<=n;i++){// outerloop
        
        for(int j=1;j<=n;j++){// ineer loop
            char ch;
            ch=64+j;  
            cout<<ch;
        }

        cout<<endl;
    }
    return 0;
}