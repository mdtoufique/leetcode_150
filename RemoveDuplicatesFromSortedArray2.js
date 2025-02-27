/**
 * @param {number[]} nums
 * @return {number}
 */
var removeDuplicates = function(nums) {
    var i=1;
    var nc=1;
    var ind=1;
    while(i<nums.length)
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
};