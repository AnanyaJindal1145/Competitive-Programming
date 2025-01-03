class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int n=nums.size();
        long int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        long int tempsum=0;
        int splits=0;
        for(int i=0;i<n;i++){
            tempsum+=nums[i];
            if(tempsum>=sum-tempsum && i<n-1){
                splits++;
            }
        }
        return splits;
    }
};