class Solution {
public:
    int mySqrt(int x) {
        //brute force linear search
        //better-binary search
        int lo=0;
        long int hi=x;
        long int mid=(hi+lo)/2;
        if(x==1)
        return 1;
        while(lo!=mid){
            if(mid*mid>x){
                hi=mid;
            }
            else if(mid*mid<x){
                lo=mid;
            }
            if(mid*mid==x)
            return mid;
            if(mid*mid>x && (mid-1)*(mid-1)<x)
            return mid-1;
            mid=(hi+lo)/2;
        }
        return mid;
    }
};