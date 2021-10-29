class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mm = prices[0];
        int ans = 0;
        int n = prices.size();
        for(int i = 0;i<n;i++){
            mm = min(prices[i],mm);
            ans = max(ans, prices[i]-mm);
        }
        return ans;
    }
};