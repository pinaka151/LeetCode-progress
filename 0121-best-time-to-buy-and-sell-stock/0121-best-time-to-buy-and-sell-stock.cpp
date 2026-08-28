class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int size = prices.size();
        int mp = 0;
        int bestBuy = prices[0];

        for(int i = 1; i<size; i++){
            if(prices[i]>bestBuy){
                mp = max(mp,prices[i] - bestBuy);
            }
            bestBuy = min(bestBuy,prices[i]);
        }
        return mp;
    }
};