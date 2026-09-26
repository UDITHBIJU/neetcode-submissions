class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>pre;
        vector<int>suff(nums.size());
        vector<int>ans;

        int num =1;
        for(int i =0;i<nums.size();i++){
            pre.push_back(num);
            num = num*nums[i];
        }
        num =1;
        for(int i = nums.size()-1;i>=0;i--){
            suff[i] = num;
            num = num*nums[i];
        }
        for(int i=0;i<nums.size();i++){
            ans.push_back(pre[i]*suff[i]);
        }
    return ans;
    }
};
