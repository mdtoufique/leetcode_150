#include<bits/stdc++.h>
using namespace std;

class Solution 
{
    public:
        int removeDuplicates(vector<int>& nums) 
        {
            int cur=0;
            int n=nums.size();
            for(int i=0;i<n;i++)
            {
                if(i==n-1 || nums[i]!=nums[i+1])
                {
                    nums[cur++]=nums[i];
                }
                
            }
            return cur;
        }
};
int main()
{
    
    return 0;
}
