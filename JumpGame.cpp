#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canJump(vector<int>& nums) 
    {
        int limit=nums[0];
        for(int i=1;i<nums.size()-1;i++)
        {
            if(i<=limit)
            {
                limit=max(limit,i+nums[i]);
            }
        }    
        return limit>=nums.size()-1;
    }
};

int main()
{
    
    return 0;
}