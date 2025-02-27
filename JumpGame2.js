/**
 * @param {number[]} nums
 * @return {number}
 */
var jump = function(nums) {
    let i,j,mx=0,cur=0,jump=0,n=nums.length;
    for(i=0;i<n-1;i++)
    {
        mx=Math.max(mx,nums[i]+i);
        if(i==cur)
        {
            cur=mx;
            jump++;
        }
    }
    return jump;
};