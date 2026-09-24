class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int>freq;
        for(int i =0;i<nums.size();i++){
            if(freq.find(nums[i])==freq.end()){
                freq[nums[i]] = nums[i];
            }
            else{
                return true;
            }
        }
        return false;

    }
};
