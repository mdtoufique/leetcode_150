/**
 * @param {number[]} prices
 * @return {number}
 */
var maxProfit = function(prices) {
    let ans = 0;
    let mn = prices[0];
    
    for (let i = 1; i < prices.length; i++) {
        mn = Math.min(prices[i], mn);
        ans = Math.max(ans, prices[i] - mn);
    }
    
    return ans;
};
