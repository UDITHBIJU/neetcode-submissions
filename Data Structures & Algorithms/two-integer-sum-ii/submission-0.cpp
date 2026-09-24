class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int,int>freq;
        for(int i=0;i<numbers.size();i++){
            int diff = target - numbers[i];
            if(freq.find(diff) != freq.end()){
                return {freq[diff]+1,i+1};
            }
            freq[numbers[i]] = i;
        }
        return{-1,-1};
    }
};
