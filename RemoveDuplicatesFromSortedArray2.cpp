#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=1;
        int nc=1;
        int ind=1;
        while(i<nums.size())
        {
            if(nums[i-1]!=nums[i])
            {
                nc=0;
                nums[ind++]=nums[i++];
                nc++;
            }
            else if(nc<2)
            {
                nums[ind++]=nums[i++];
                nc++;
            }
            else
            {
                nc++;
                i++;
            }

        }
        return ind;
    }
};
int main()
{
    
    return 0;
}
