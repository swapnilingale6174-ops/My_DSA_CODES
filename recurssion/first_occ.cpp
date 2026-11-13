#include<iostream>
#include<algorithm>
#include<string>
#include<algorithm>
#include<climits>
#include<vector>
using namespace std;
int first_occ(vector<int> &arr,int target){
int n=arr.size();
static int i=0;
if(i==n){
    return -1;
}

if(arr[i]==target){
    return i;
}
i++;
return first_occ(arr,target);

}


int main(){


vector<int> nums={1,2,3,3,4,5};
cout<<last_occ(nums,3);

    return 0;
}