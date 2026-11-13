#include<iostream>
#include<algorithm>
#include<string>
#include<algorithm>
#include<climits>
#include<vector>
using namespace std;
int last_occ(vector<int> &arr){
int n=arr.size();
int i=n-1;
if(n<=1){
    return -1;
}

if(arr[i]==arr[i-1]){
    return i;
}
arr.pop_back();

return last_occ(arr);

}


int main(){


vector<int> nums={1,2,2,3,4,5};
cout<<last_occ(nums);

    return 0;
}