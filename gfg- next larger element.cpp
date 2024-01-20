// # //{ Driver Code Starts
// # #include<bits/stdc++.h>
// # using namespace std;


// # // } Driver Code Ends

class Solution{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n){
        // Your code here
        stack<long long int> stk;
        vector<long long int> greater(n,-1);
        long long int top=0;
        
        for(int i=0;i<n;i++){
            while(!stk.empty() && arr[stk.top()]<arr[i]){
                top=stk.top();
                stk.pop();
                greater[top]=arr[i];
            }
            stk.push(i);
            top=0;
        }
        return greater;
    }
};

// # //{ Driver Code Starts.

// # int main()
// # {
// #     int t;
// #     cin>>t;
// #     while(t--)
// #     {
        
// #         int n;
// #         cin>>n;
// #         vector<long long> arr(n);
// #         for(int i=0;i<n;i++)
// #             cin>>arr[i];
        
// #         Solution obj;
// #         vector <long long> res = obj.nextLargerElement(arr, n);
// #         for (long long i : res) cout << i << " ";
// #         cout<<endl;
// #     }
// # 	return 0;
// # }
// # // } Driver Code Ends