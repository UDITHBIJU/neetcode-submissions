class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>pairs;
        for(int i =0;i<strs.size();i++){
            int count[26] ={0};
            for(int j =0;j<strs[i].length();j++){
                count[strs[i][j]-'a']++;
            }
            string key ="";
            for(int k =0;k<26;k++){
                key += to_string(count[k])+ '#';
            }
           pairs[key].push_back(strs[i]);
        }
        
        vector<vector<string>> result;
        for (auto &[key, group] : pairs) {
         result.push_back(group);
        }

      return result;
    }
};
