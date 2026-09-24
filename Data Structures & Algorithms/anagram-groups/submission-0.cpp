class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,int>freq;
        vector<vector<string>>out;
        for(int i =0;i<strs.size();i++){
             string s = strs[i];                
            sort(s.begin(), s.end());   

            if(freq.find(s)==freq.end()){
                 freq[s] = out.size();  
               out.push_back(vector<string>());
            }
            
            out[freq[s]].push_back(strs[i]);

        }
        return out;

    }
};
   