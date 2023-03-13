class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ret;
        for(auto i: nums){
           if((i+nums[i+1])==target){
                 ret.push_back(i);
                 ret.push_back(i+1);
            } 
        }
        for(int i=0;i<nums.size();i++){
            if((nums[i]+nums[i+1])==target){
                 ret.push_back(i);
                 ret.push_back(i+1);
            }
        }
        return ret;
    }
};