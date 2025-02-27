/**
 * @param {number[]} prices
 * @return {number}
 */
var maxProfit = function(prices) {
    let profit=0;
    let n=prices.length;
    for(let i=1;i<n;i++)
    {
        profit+=Math.max(0,prices[i]-prices[i-1]);
    }
    return profit;
};