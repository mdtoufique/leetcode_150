/**
 * @param {number[]} nums
 * @return {number}
 */
var removeDuplicates = function(nums) {
    let i=0;
    while(i<nums.length)
    {
        j=i+1;
        while(j<nums.length && nums[j]==nums[i])
        {
            j++;
        }
        if(j!=i+1)
        {
            nums.splice(i+1,j-(i+1));
        }
        i++;
    }
};