/**
 * @param {number[]} nums
 * @return {number}
 */
var majorityElement = function (nums) {
    nums.sort();
    let count = 1;
    const n = nums.length;
    let majorityElement = nums[0];

    for (let i = 1; i < n; i++) {
        if (nums[i] === nums[i - 1]) {
            count++;
            if (count > n / 2) {
                majorityElement = nums[i];
                break;
            }
        } else {
            count = 1;
        }
    }

    return majorityElement;
};
