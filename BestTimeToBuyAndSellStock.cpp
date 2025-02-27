#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans=0;
        int mn;
        mn=prices[0];
        for(int i=1;i<prices.size();i++)
        {
            mn=min(prices[i],mn);
            
            ans=max(ans,prices[i]-mn);

        }
        return ans;
    }
};
int main()
{
    
    return 0;
}