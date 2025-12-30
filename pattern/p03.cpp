#include<iostream>
using namespace std;

int main(){
    int n;

    cout<<"enter no of line:";
    cin>>n;

    for(int i=1;i<=n;i++){// outerloop
         char ch='A';
        for(int j=1;j<=n;j++){// ineer loop
           
            cout<<ch<<" ";
            ch++;
        }

        cout<<endl;
    }
    return 0;
}