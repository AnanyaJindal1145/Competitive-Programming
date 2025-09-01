class Solution {
public:
    bool isAnagram(string s, string t) {
        int n=s.length();
        if(n!=t.length()) return false;
        unordered_map<char, int> mappy;
        for(int i=0;i<n;i++){
            mappy[s[i]]++;
        }
        for(int i=0;i<n;i++){
            mappy[t[i]]--;
        }
        for(auto it=mappy.begin();it!=mappy.end();it++){
            if(it->second>0 || it->second<0) return false;
        }
        return true;
    }
};