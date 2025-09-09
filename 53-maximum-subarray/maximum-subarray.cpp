class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        int rightptr=1;
        int sum=nums[0];
        int maxi=nums[0];
        while(rightptr<nums.size()){
            sum=max(nums[rightptr], sum+nums[rightptr]);
            maxi=max(maxi, sum);
            rightptr++;
        }
        return maxi;
    }
};