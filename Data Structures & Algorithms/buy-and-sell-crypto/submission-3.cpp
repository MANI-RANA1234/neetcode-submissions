class Solution {
public:
    int maxProfit(vector<int>& prices) {

    int max1=0;
    
    int profit1=0;

    for (int i = prices.size()-1; i>=0; i--){
        max1=max(max1,prices[i]);
        profit1 = max(profit1, max1-prices[i]); 
    }   
    return profit1;
    }
};
