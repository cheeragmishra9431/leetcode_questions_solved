class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int profit=0;
        int i=0;
        while(i<n-1){
            while(i<n-1 && prices[i]>=prices[i+1]){
                i++;
            }
            int buy=i++;
            while(i<n && prices[i]>=prices[i-1]){
                i++;
            }
            int sell=i-1;
            profit+=prices[sell]-prices[buy];
            
            
        }
        return profit;
    }
};