class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans = 0;
   int bestBuy =prices[0];
        for(int i =1;i<prices.size();i++){
          int profit = prices[i]-bestBuy;
          ans = max(ans,profit);
          bestBuy = min(bestBuy,prices[i]); 
        }
return ans;
    }

};
