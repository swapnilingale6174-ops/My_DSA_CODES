class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> ans;
       sort(nums.begin(),nums.end());
       int missing=0;
       int repeated;
       int j=0;
        for(int i=0;i<nums.size();i++){
            if((i<(nums.size()-1))&&(nums[i]==nums[i+1])){
                repeated=nums[i];
            }

            if((i==0)&&(nums[i]!=1)){
                missing=1;
            }
            else if(i==(nums.size()-1)&&(nums[i]!=nums.size())){
                missing=nums.size();
            }
            else if((missing!=1)&&(missing!=nums.size())&&(nums[i]!=(i+1))&&((i+1)!=nums[i+1])&&((i+1)!=nums[i-1])){
                missing=i+1;
            }
    }
    ans.push_back(repeated);
    ans.push_back(missing);
  
    return ans;}
};