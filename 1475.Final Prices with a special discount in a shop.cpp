class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        stack<int> stk;
        int n=prices.size();
        vector<int> smaller;
        smaller=prices;
        int top=0;
        
        for(int i=0;i<n;i++){
            while(!stk.empty() && prices[stk.top()]>=prices[i]){
                top=stk.top();
                stk.pop();
                smaller[top]=prices[top]-prices[i];
            }
            stk.push(i);
            top=0;
        }
        return smaller;
    }
};