class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>result;
        int start =0,n = nums.size()-1;
        while(start<=n-2){
           int pt =start+1;
            int end =  n;
            if(start>0 && nums[start-1]==nums[start]){
                start++;
                continue;
            }
            while(pt<end){
          int  ans= nums[start]+nums[pt]+nums[end];
            if(ans<0){
                pt++;
            }
            else if(ans>0){
                end--;
            }
            else{
                result.push_back({nums[start],nums[pt],nums[end]});
                pt++;
                end--;
               while(pt<end && nums[pt] == nums[pt-1] ) pt++;
                while(pt<end && nums[end]==nums[end+1])end--;
            }
            }
            start++;
        }
        return result;
    }
};
