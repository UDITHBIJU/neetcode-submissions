class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>first;
        unordered_map<char,int>sec;
        if(s.length() != t.length()){
            return false;
        }else{
            for(int i =0;i<s.length();i++){
                first[s[i]]++;
                sec[t[i]]++;
            }
             for(int i =0;i<s.length();i++){
                if(first[s[i]] != sec[s[i]]){
                    return false;
                }
             }
        }
        return true;
        
    }
};
