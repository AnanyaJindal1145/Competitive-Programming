class Solution {
public:
    int possibleStringCount(string word) {
        int ways=1;
        char prev=word[0];
        char curr;
        for(int i=1;i<word.length();i++){
            curr=word[i];
            if(prev==curr) ways++;
            prev=curr;
        }
        return ways;
    }
};