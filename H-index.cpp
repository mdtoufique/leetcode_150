#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.begin(),citations.end());
        int mx=0;
        int n=citations.size();
        for(int i=0;i<n;i++)
        {
            mx=max(mx,min(n-i,citations[i]));
        }
        return mx;
    }
};

int main()
{
    
    return 0;
}