#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size(),i,j;
        int dp[n];
        for(i=0;i<n;i++)
        {
            dp[i]=INT_MAX;
        }
        dp[0]=0;
        for(i=0;i<n;i++)
        {
           for(j=1;i+j<n && j<=nums[i];j++)
           {
               dp[i+j]=min(dp[i+j],dp[i]+1);
           }
        }
        return dp[n-1];
    }
};

int main()
{
    
    return 0;
}