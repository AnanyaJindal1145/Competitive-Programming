class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int lptr=-1;
        int rptr=0;
        int maxy=0;
        unordered_map<char, int> mappy;
        for(;rptr<s.length();rptr++){
            if(mappy.find(s[rptr])!=mappy.end()){
                if(lptr<mappy[s[rptr]]) lptr=mappy[s[rptr]];
            }
            mappy[s[rptr]]=rptr;
            maxy=max(maxy, rptr-lptr);
        }
        return maxy;
    }
};