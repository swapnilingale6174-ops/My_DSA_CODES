#include<iostream>
#include<string>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
int trapwater(vector<int> &nums){
int st=0;
int n=nums.size();
int end=n-1;
int total=0;
int leftmx=nums[0];
int rightmx=nums[n-1];


while(st<end){
    if(leftmx<rightmx){
    st++;
    if(leftmx<nums[st]){
        leftmx=nums[st];
    }
    else{
        total+=(leftmx-nums[st]);
    }
}
else{
    end--;
    
    if(rightmx<nums[end]){
        rightmx=nums[end];
    }
    else{
        total+=(rightmx-nums[end]);
    }
}
    

}
return total;
}

int main(){

vector<int> nums={4,2,0,6,3,2,5};
cout<<trapwater(nums);

    return 0;
}