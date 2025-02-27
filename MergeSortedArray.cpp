#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 
    {
        
        int i,j,k;
        vector<int>temp1=nums1;
    
        i=k=j=0;
        while(k<n+m)
        {
            if(j>=n)
            {
                nums1[k++]=temp1[i++];
                continue;
            }
            if(i>=m)
            {
                nums1[k++]=nums2[j++];
                continue;
            }
            if(temp1[i]<=nums2[j])
            {
                nums1[k++]=temp1[i++];
            }
            else
            {
                nums1[k++]=nums2[j++];
            }
            
        }
        
    }
    
        

};

int main()
{
    
    return 0;
}
