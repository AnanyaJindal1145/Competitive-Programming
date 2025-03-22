class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int count=0;
        int gptr=0;
        int sptr=0;
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        for(;gptr<g.size() && sptr<s.size();gptr++){
            while(g[gptr]>s[sptr] && sptr<s.size()-1){
                sptr++;
            }
            if(g[gptr]<=s[sptr]) count++;
            sptr++;
        }
        return count;
    }
};