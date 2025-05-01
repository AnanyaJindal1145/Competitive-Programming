class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum=0;
        int maxi=INT_MIN;
        int len=nums.size();
        for(int j=0;j<k;j++){
            sum+=nums[j];            
        }
        maxi=max(maxi,sum);
        for(int i=k;i<len;i++){
            sum-=nums[i-k];
            sum+=nums[i];
            maxi=max(maxi,sum);
        }
        //cout<<maxi<<endl<<k;
        return (double)maxi/k;
    }
};