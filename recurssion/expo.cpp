#include<iostream>
#include<string>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
int expo(int x,int n){
    int ans;
    if(n==0){
        return 1;
    }
    else if(n==1){
        return x;
    }
    

    if(n%2==0){
        ans=expo(x,n/2);
        return ans*ans;
    }
    else{
        ans=expo(x,(n-1)/2);
        return  x*ans*ans;
    }
}

int main(){
cout<<expo(2,10);




    return 0;
}