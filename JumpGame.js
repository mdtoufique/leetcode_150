/**
 * @param {number[]} nums
 * @return {boolean}
 */
var canJump = function(nums) {
    let limit = nums[0];
    for (let i = 1; i < nums.length - 1; i++) {
        if (i <= limit) {
            limit = Math.max(limit, i + nums[i]);
        }
    }
    return limit >= nums.length - 1;
};
