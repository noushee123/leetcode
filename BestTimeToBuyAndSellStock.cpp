class solution{
public:

int maxProfit(vector<int>& prices){
      int n = prices.size();

      int BuyAt = INT_MAX;
      int maxProfit = 0;
      for(int i = 0;i<n;i++){
      BuyAt = min(BuyAt,prices[i]);
      maxProfit = max(maxProfit,prices[i]-BuyAt);
      }

     return maxProfit;
   }

}
