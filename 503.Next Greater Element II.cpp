class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& arr) {
        stack<int> stk;
        int n=arr.size();
        vector<int> greater(n,-1);
        int top=0;
        
        for(int i=0;i<n;i++){
            while(!stk.empty() && arr[stk.top()]<arr[i]){
                top=stk.top();
                stk.pop();
                greater[top]=arr[i];
            }
            stk.push(i);
            top=0;
        }
        if(stk.size()>1){
        for(int i=0;i<n;i++){
            while(!stk.empty() && arr[stk.top()]<arr[i]){
                top=stk.top();
                stk.pop();
                greater[top]=arr[i];
            }
            if(stk.size()==1){
                break;
            }
        }
        }
        return greater;
    }
};