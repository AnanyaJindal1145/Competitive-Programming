class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        if(strs.size()==0) return vector<vector<string>>();
        unordered_map<string, vector<string>> mappy;
        int count[26];
        for(int i=0;i<strs.size();i++){
            fill(begin(count), end(count), 0); //since count is an array not vector,also fill with 0
            for(int j=0;j<strs[i].length();j++){
                // cout<<strs[i]; // on running this line is giving strs and 3724780 more chars
                count[strs[i][j]-'a']++; // this line is giving AddressSanitizer:DEADLYSIGNAL
            }
            string key_string="";
            for(int k=0;k<26;k++){
                key_string+=to_string(count[k]); 
                key_string+=',';
            }
            if(mappy.find(key_string)==mappy.end()){
                mappy[key_string]=vector<string>();
            }
            mappy[key_string].push_back(strs[i]);
        }
        vector<vector<string>> result;
        for(auto it=mappy.begin();it!=mappy.end();it++){
            result.push_back(it->second);
        }
        return result;
    }
};