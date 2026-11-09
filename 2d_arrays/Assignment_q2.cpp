#include<iostream>
using namespace std;
int sum_total(int arr[][3],int n,int m){
    int sum=0;

        for(int j=0;j<m;j++){
             sum+=arr[1][j];}

   return sum; }
int main(){
int matrix[3][3]= {{1,4,9}, {11,4,3}, {2,2,3} };; 
    cout<<sum_total(matrix,3,3);
    
    return 0;
}