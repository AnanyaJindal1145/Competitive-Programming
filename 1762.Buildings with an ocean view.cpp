class Solution {
public:
    vector<int> findBuildings(vector<int> &heights) {
        // write your code here
        stack<int> stk;
        int n=heights.size();
        vector<int> greater;
        int i;
        for(i=0;i<n;i++){
            while(stk.size()!=0 && heights[stk.top()]<=heights[i]){
                stk.pop();
            }
            stk.push(i);
        }
        while(stk.size()!=0){
            greater.push_back(stk.top());
            stk.pop();
        }
        reverse(greater.begin(),greater.end());
        return greater;
    }
};