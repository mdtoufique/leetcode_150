#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        int n=nums.size();
        k=k%n;
        int ind,cur,temp;
        int cycle=__gcd(k,n);
        for(int j=0;j<cycle;j++)
        {
            ind=j;
            cur=nums[j];

            for(int i=0;i<(n/cycle);i++)
            {
                temp=nums[(ind+k)%n];
                nums[(ind+k)%n]=cur;
                ind=(ind+k)%n;
                cur=temp;
                


                
            }
        }
    }
};
int main()
{
    
    return 0;
}