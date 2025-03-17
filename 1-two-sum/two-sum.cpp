class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mappy;
        int index1,index2=0;
        for(int i=0;i<nums.size();i++){
            if(mappy.find(target-nums[i])!=mappy.end()) return {i,mappy[target-nums[i]]};
            mappy[nums[i]]=i;
        }
        return {0,0};
    }
};