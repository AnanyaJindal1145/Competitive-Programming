class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& arr) {
        stack<int> stk;
        int n=arr.size();
        vector<int> warmer(n,0);
        int top=0;
        
        for(int i=0;i<n;i++){
            while(!stk.empty() && arr[stk.top()]<arr[i]){
                top=stk.top();
                stk.pop();
                warmer[top]=i-top;
            }
            stk.push(i);
            top=0;
        }
        return warmer;
    }
};