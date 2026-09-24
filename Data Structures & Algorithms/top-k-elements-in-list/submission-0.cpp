class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>freq;
        vector<int>ans;
        for(int i =0;i<nums.size();i++){
            
                freq[nums[i]]++;
            
        }
       
    vector<pair<int, int>> freqVec(freq.begin(), freq.end());
          

    // Step 3: Sort by frequency (descending)
    sort(freqVec.begin(), freqVec.end(), [](pair<int, int>& a, pair<int, int>& b) {
        return a.second > b.second;
    });

    // Step 4: Collect top k elements
    vector<int> result;
    for (int i = 0; i < k && i < freqVec.size(); i++) {
        result.push_back(freqVec[i].first);
    }
        return result;
    }
};
