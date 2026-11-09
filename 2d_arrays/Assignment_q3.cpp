#include<iostream>
using namespace std;
void print(int arr[][3],int n,int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
    }cout<<endl;
}

void Transpose(int arr[][2],int n,int m){
    
    int ptr[m][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            ptr[j][i]=arr[i][j];
        }
    }
for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<ptr[i][j]<<" ";
        }cout<<endl;
    }
}
 

  
int main(){
int matrix[3][2]= {{1,2}, {3,4}, {5,6} };; 
    Transpose(matrix,3,2);
    



    return 0;
}