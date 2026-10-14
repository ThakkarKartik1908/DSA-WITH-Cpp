#include<iostream>
using namespace std;

void input(int m[][4]){
    cout<<"enter element:"<<endl;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
           cin>>m[i][j];
        }
    }
    
}
bool Linear_search(int mat[][4],int key){
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
           if(mat[i][j]==key){
            return true;
           }
        }
    }
    return false;
}
pair<int,int> search(int mat[][4],int key){
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
           if(mat[i][j]==key){
            return {i,j} ;
           }
        }
    }
    return {-1,-1};
}
void maxSum_row(int mat[][4]){
    int maxSum_row = 0;
    for(int i=0;i<4;i++){
      int  rowSum=0;
        for(int j=0;j<4;j++){
           rowSum +=mat[i][j];
        }
        if(rowSum>maxSum_row){
            maxSum_row = rowSum;
        }
    
    }
   cout<<"MaxRowSum is ="<<maxSum_row<<endl;

}
void maxSum_col(int mat[][4]){
    int maxSum_col = 0;
    for(int i=0;i<4;i++){
      int  colSum=0;
        for(int j=0;j<4;j++){
           colSum +=mat[j][i];
        }
        if(colSum>maxSum_col){
            maxSum_col = colSum;
        }
    
    }
   cout<<"MaxColSum is ="<<maxSum_col<<endl;

}
void Diagonal_sum(int mat[][4]){
    int sum = 0;

    for(int i=0;i<4;i++){
        sum+=mat[i][i];
        if(i!=4-1-i){
            sum+=mat[i][4-1-i];
        }
    }
    cout<<"Diagonal sum = "<<sum;
}
int main(){
    int mat[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12,},{13,14,15,16}},m[4][3];
    int ans,key;
    pair<int,int>p;
    //output
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    //input(m);
    //output
    /* for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }*/
    cout<<"enter key:";
    cin>>key;
    ans  = Linear_search(mat,key);
    if(ans){
        cout<<"present";
    }else{
        cout<<"not present";
    }
     p =  search(mat,key);
    cout<<"("<<p.first<<","<<p.second<<")"<<endl;  
    maxSum_row(mat);
    maxSum_col(mat);
    Diagonal_sum(mat);

    return 0;
}