#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int cnt=1;
        int n=nums.size();
        int ans=nums[0];
        for(int i=1;i<n;i++)
        {
            if(nums[i]==nums[i-1])
            {
                if(cnt>=n/2)
                {
                    ans=nums[i-1];
                }
                cnt++;
            }
            else
            {
                
                cnt=1;
            }
        }
       
        return ans;
        
    }
};
int main()
{
    
    return 0;
}