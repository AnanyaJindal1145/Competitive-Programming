class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,int> mappy;
        int count=0;
        for(int i=0;i<arr.size();i++){
            mappy[arr[i]]++;
        }
        for(int i=0;i<arr.size();i++){
            if(mappy[arr[i]]==1) count++;
            if(count==k) return arr[i];
        }
        return "";
    }
};