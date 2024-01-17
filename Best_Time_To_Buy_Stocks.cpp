class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_pro  = 0;
        int n = prices.size();
        int l=0,r=1;
        while(r<n){
            if(prices[l] < prices[r]){
                int temp = prices[r] - prices[l];
                max_pro = max(max_pro,temp);
            }
            else l = r;
            r++;
        }
        return max_pro;
    }
};
