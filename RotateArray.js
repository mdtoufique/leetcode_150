/**
 * @param {number[]} nums
 * @param {number} k
 * @return {void} Do not return anything, modify nums in-place instead.
 */
var rotate = function(nums, k) {
    const n = nums.length;
    k = k % n;
    let ind, cur, temp;
    const cycle = gcd(k, n);
    for (let j = 0; j < cycle; j++) {
        ind = j;
        cur = nums[j];
        for (let i = 0; i < Math.floor(n / cycle); i++) {
            temp = nums[(ind + k) % n];
            nums[(ind + k) % n] = cur;
            ind = (ind + k) % n;
            cur = temp;
        }
    }
};

function gcd(a, b) {
    while (b !== 0) {
        const temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
