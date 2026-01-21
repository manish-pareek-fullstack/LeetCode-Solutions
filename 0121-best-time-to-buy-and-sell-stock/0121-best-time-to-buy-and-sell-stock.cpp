class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int selling=0;
        int profit=0;
        int i=prices.size()-1;
        while(i>=0){
            if(prices[i]>selling){
                selling=prices[i];
            }
            else{
                profit=max(selling-prices[i],profit);
            }
            i--;
        }
        return profit;
    }
};