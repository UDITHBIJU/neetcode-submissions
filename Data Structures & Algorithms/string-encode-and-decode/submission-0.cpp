class Solution {
public:

    string encode(vector<string>& strs) {
        
        string encoded = "";
        for (string& s : strs) {
             encoded += to_string(s.length()) + "#" + s;
        }

        return encoded;
    }

    vector<string> decode(string s) {
        vector<string>dec;
        int i =0;

        while(i<s.length()){
            int j = i;

            while(s[j] != '#'){
                j++;
            }
            
            int len = stoi(s.substr(i, j - i));
            j++;

           string word = s.substr(j, len);

             dec.push_back(word);

            i = j + len;
           
        }
        return dec;
    }
};
