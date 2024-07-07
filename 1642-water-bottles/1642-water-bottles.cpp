class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
      int ans=numBottles;
      int emp=numBottles;
      while(emp>=numExchange){
       emp=emp-numExchange;
       emp++;
       ans++;
      } 
      return ans;
    }
};