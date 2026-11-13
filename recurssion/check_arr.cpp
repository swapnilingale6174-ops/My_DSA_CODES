#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;
bool check_arr(int arr[],int n){
    if(n<=1){
        return true;
    }
   if(arr[n-1]>arr[n-2]){
    return check_arr(arr,n-1);
   }
 
   return false;
 
}

int main(){



    return;
}