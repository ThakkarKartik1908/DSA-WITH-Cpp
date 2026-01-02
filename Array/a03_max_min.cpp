// find smallest and largest value also index + swap max and min

#include<iostream>
#include<climits> // for INT_MAX AND INT_MIN
using namespace std;

int main(){
    int num[] = {1,24,-15,60,500};
    int size = 5,ind_max ,ind_min;
    int smallest = INT_MAX ;
    int largest = INT_MIN ;

    for(int i=0 ; i<size ; i++){
        if(num[i]<smallest){
            smallest = num[i];
            ind_min = i ;
        }
        else{
            largest = num[i] ;
            ind_max =  i ;
        }
    }
    cout<<"smallest="<<smallest<<endl;
    cout<<"largest="<<largest<<endl;
    cout<<"ind_max="<<ind_max<<endl;
    cout<<"ind_min="<<ind_min<<endl;
    
    cout<<"By cpp function"<<endl;

    for(int i=0 ; i<size ; i++){
       smallest = min(num[i],smallest);
       largest = max(num[i],largest);
    }
    cout<<"smallest="<<smallest<<endl;
    cout<<"largest="<<largest<<endl;

    swap(num[ind_max],num[ind_min]);// also we swap by temp
    cout<<"after swapping max and min the array"<<endl;

    for(int i=0;i<size;i++){
        cout<<num[i]<<",";
    }

    
    return 0;
}