class Solution {
    fun maxProfit(prices: IntArray): Int {
        if (prices.isEmpty()) return 0
        var maxProfit = 0
        var buy = prices[0]
        
        for (i in 1 until prices.size) {
            if (prices[i] < buy) {
                buy = prices[i]
            } else if (prices[i] - buy > maxProfit) {
                maxProfit = prices[i] - buy
            }
        }
        return maxProfit
    }
}
