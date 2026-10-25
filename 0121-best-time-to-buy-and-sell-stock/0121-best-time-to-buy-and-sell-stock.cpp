class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_price = prices[0];        
        int profit=0;
        for (int i=1;i<prices.size();i++)
        {
            if (min_price>prices[i])
            {
                min_price = prices[i];
            }
            else if (profit<(prices[i] - min_price)) profit = prices[i] - min_price;
        }
        return profit;
    }
};