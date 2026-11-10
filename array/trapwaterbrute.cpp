#include<iostream>
#include<string>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
int trapwater(vector<int> &arr){
int n=arr.size();
int total=0;
vector<int> left_mx;
int lmx=INT_MIN;int rmx=INT_MIN;
left_mx.push_back(lmx);
vector<int> right_mx;
right_mx.push_back(rmx);

for(int i=1;i<n;i++){
 
    rmx=max(rmx,arr[n-i]);
    lmx=max(lmx,arr[i-1]);
  
    left_mx.push_back(lmx);
    right_mx.push_back(rmx);
 
}
for(int i=0;i<n;i++){

if((arr[i]<left_mx[i]) && (arr[i]<right_mx[n-1-i])){
    int mini=min(left_mx[i],right_mx[n-1-i]);
 
    total+=(mini-arr[i]);
}
}

    return total;
}



int main(){

vector<int> nums={4,2,0,6,3,2,5};
cout<<trapwater(nums);

    return 0;
}