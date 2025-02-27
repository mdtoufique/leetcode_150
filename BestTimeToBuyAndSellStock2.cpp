#include<bits/stdc++.h>
using namespace std;

class Solution {
    
public:
    
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int dp[n+1];
        int i,j,k;
        for(i=0;i<=n;i++)
        {
            dp[i]=0;
        }
        for(i=1;i<=n;i++)
        {
           
            for(j=i;j<=n;j++)
            {
                dp[j]=max(dp[i]+prices[j-1]-prices[i-1],dp[j-1]);
               
            }
            
        }
       
        return dp[n];
    }
};
int main()
{
    
    return 0;
}