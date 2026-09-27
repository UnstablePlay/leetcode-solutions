class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        sort(prices.begin(),prices.end());        
        if ((money-(prices[1]+prices[0]))<0) return money;
        else return (money-(prices[1]+prices[0]));
        return 0;
    }
};