class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>prefix,suffix(nums.size());
        prefix.push_back(1);
        int ans =1;
        suffix[nums.size()-1] =1;
        for(int i =1;i<nums.size();i++){
             ans = ans*nums[i-1];
            prefix.push_back(ans);
        }
        ans =1;
        for(int i = nums.size()-2;i>=0;i--){
            ans =ans*nums[i+1];
            suffix[i]=ans;
        }
        for(int i =0;i<nums.size();i++){
            suffix[i] =  suffix[i]*prefix[i];
        }
        return suffix;
    }
};
