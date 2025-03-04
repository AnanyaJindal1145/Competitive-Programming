class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mappy;
        for(int i=0;i<nums.size();i++){  // number as key, index as value
            mappy[nums[i]]=i;
        }
        for(int i=0;i<nums.size();i++){
            int difference=target-nums[i];
            if(mappy.find(difference)!=mappy.end() && mappy[difference]!=i) 
            return {i,mappy[difference]};
        }
        return {};
    }
};