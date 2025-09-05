#include<bits/stdc++.h>
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        if(x==0) return true;
        int order_mag_10=log10(x);
        int leftpow=pow(10,order_mag_10);
        while(x>0){
            if(x / leftpow != x%10) return false;
            x= (x % leftpow)/10;
            leftpow/=100;
        }
        return true;
    }
};