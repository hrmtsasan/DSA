// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, int s)
    {
        vector<int> res;
        int i = 0;
        int j = 1;
        int sum =0;
        sum = arr[i];
        while(i<=j and j<=n)
        {
            if(sum<s)
            {
                sum = sum + arr[j];
                j++;
            }
            else if(sum>s)
            {
                sum = sum-arr[i];
                i++;
            }
            else
            {
                res.push_back(i+1);
                res.push_back(j);
                return res;
            }
        }
        
        res.push_back(-1);
        return res;
    }
};

// { Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        int arr[n];
        
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}  // } Driver Code Ends