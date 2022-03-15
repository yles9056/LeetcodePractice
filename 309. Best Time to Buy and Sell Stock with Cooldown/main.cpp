class Solution {
 public:
  int maxProfit(vector<int>& prices) {
    // https://leetcode.com/problems/best-time-to-buy-and-sell-stock-with-cooldown/discuss/75927/Share-my-thinking-process
    int buy(INT_MIN), sell(0), prev_sell(0), prev_buy;
    for (int price : prices) {
      prev_buy = buy;
      buy = max(prev_sell - price, buy);
      prev_sell = sell;
      sell = max(prev_buy + price, sell);
    }
    return sell;
  }
};