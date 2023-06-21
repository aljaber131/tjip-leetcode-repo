lass Solution {
public:
    int maxProfit(vector<int>& prices) {
        //time complexity 0(n)
        int min=INT_MAX,profit=0;
        for(int i=0;i<prices.size();i++){
            if(min>prices[i])
            min=prices[i];
            if(profit<prices[i]-min)
            profit=prices[i]-min;
        }
        return profit;
    }
};