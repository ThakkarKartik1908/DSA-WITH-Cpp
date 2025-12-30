#include<iostream>
using namespace std;

int main(){
    int marks;
    cout<<"enter your marks:";
    cin>>marks;
    if(marks>=80 && marks<=100){
        cout<<" you got distigtion";
    }
    else if(marks>=55 && marks<=79){
        cout<<" you got first calss";
    }
    else if (marks>=33 && marks<=54){
        cout<<"you got second class";
    }
    else if(marks<33){
        cout<<"next time better luck";
    }
    else {
        cout<<"you enter worong marks";
    }
    return 0;
}
