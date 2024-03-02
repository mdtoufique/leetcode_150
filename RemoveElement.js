/**
 * @param {number[]} nums
 * @param {number} val
 * @return {number}
 */

var removeElement = function(nums, val) {
    let j=nums.length-1,i=0;
    while(i<=j)
    {
        if(nums[i]==val)
        {
            nums[i]=nums[j];
            nums[j]=val;
            j--;
        }
        else
        {
            i++
        }
    }
    return i;
};