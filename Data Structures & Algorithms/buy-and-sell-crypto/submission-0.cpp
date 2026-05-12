class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit =0;
        int minp = prices[0];
        for(int i=1;i<prices.size();i++){
            if(prices[i]<minp) minp = prices[i];
            int maxp = prices[i]-minp;
            if(maxp>maxprofit) maxprofit = maxp;
        }
        return maxprofit;
    }
};
