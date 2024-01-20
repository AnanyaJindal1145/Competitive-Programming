class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& arr) {
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
        unordered_map<int,int> umap;
        for(int i=0;i<n;i++){
            umap[arr[i]]=i;
        }
        int a=-1;
        for(int j=0;j<nums1.size();j++){
            a=umap.at(nums1[j]);
            nums1[j]=greater[a];
        }
        return nums1;
    }
};