class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>sum;
        for(int i =0;i<nums.size();i++){
            if(sum.find(target-nums[i]) ==sum.end()){
                sum[nums[i]] = i;
            }else{
                return {sum[target-nums[i]],i};
            }
        }
        return{-1,-1};
    }
};
