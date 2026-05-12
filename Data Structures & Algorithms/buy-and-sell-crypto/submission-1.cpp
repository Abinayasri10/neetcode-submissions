class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int left = 0;
        int n = prices.size();
        int right  = 1;
        int maxp = 0;
        while(right<n){
            if(prices[right]>prices[left]){
                int cp = prices[right]-prices[left];
                maxp = max(cp,maxp);
            }else{
                left = right;
            }
            right++;
        }
        return maxp;
    }
};
