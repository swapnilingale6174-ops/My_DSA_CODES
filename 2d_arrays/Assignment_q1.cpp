#include<iostream>
using namespace std;
int count(int arr[][3],int n,int m,int key){
    int c=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==key){c++;}}
            
            
        }
   return c; }




int main(){
int matrix[2][3]={ {4,7,8}, {8,8,7} }; 
    cout<<count(matrix,2,3,7);
    



    return 0;
}