#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        vector<int> dp(prices.size(), 0);
        int min_price = prices[0], max_profit = 0;

        dp[0] = 0;

        for (int i = 1; i < prices.size(); i++)
        {
            min_price = min(min_price, prices[i]);
            dp[i] = max(dp[i - 1], prices[i] - min_price);
            max_profit = max(max_profit, dp[i]);
        }

        return max_profit;
    }
};