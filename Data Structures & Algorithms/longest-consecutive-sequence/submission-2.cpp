class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int,int>freq;
        for(int i =0;i<nums.size();i++){
            freq[nums[i]]++;
        }
        int ans =0;
        for(int i =0;i<nums.size();i++){
            if(freq.find(nums[i]-1) ==freq.end()){
                int num = nums[i];
                int count = 1;
                
                for(int j =0;j<freq.size();j++){
                  
                    if(freq.find(num+1) != freq.end()){
                        count++;
                       
                        num= num+1;
                    }else{
                        break;
                    }
                }
                ans =max(count,ans);
            }else{
                continue;
            }
        }
        return ans;
    }
};
