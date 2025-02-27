#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) 
    {
        int i=0;
        auto itr=nums.begin();
        while(i<nums.size())
        {
            
            if(nums[i]==val)
            {
                nums.erase(itr+i);
            }
            else
            {
                i++;
            }
        }
        return i;
    }
    
};

int main()
{
    
    return 0;
}
