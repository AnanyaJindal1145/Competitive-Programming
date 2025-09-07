class Solution {
public:
    int trap(vector<int>& height) {
        int leftindex=0;
        int rightindex=height.size()-1;
        int leftmax=height[leftindex];
        int rightmax=height[rightindex];
        int sum=0;
        while(leftindex<=rightindex){
            if(leftmax>rightmax){
                rightmax=max(rightmax, height[rightindex]);
                if(rightmax-height[rightindex]>0) sum+=rightmax-height[rightindex];
                rightindex--;
            }
            else{
                leftmax=max(leftmax, height[leftindex]);
                if(leftmax-height[leftindex]>0) sum+=leftmax-height[leftindex];
                leftindex++;
            }
        }
        return sum;

    }
};