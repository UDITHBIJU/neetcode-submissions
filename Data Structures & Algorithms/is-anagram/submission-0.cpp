class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> string1(26,0);
        vector<int>string2(26,0);
        int length1 = s.size();
        int length2 = t.size();
        if(length1 !=length2){
            return false;
        }
        for(int i =0;i<length1;i++){
            char c = tolower(s[i]);
            string1[c-'a'] +=1;
            c = tolower(t[i]);
            string2[c-'a'] +=1; 
        }
        for(int i =0;i<26;i++){
            if(string1[i]!=string2[i]){
                return false;
            }
        }
    return true;
    }
};
