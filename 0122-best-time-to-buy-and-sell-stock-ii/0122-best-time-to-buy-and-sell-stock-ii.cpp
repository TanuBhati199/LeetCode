class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int sum=0;
        int buy=prices[0];
        int sell=prices[1];
        for(int i=1;i<prices.size();i++){
            if(buy<sell){
                sum=sum+(sell-buy);
                 }
                 buy=prices[i];
                 sell=prices[i+1];

        }
   return sum; }
};