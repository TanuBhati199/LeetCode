class Solution {
public:
    bool canJump(vector<int>& nums) {
        int i=0;
        int reach=0;
        int n=nums.size();
        while(i<=reach){
         reach=max(reach,i+nums[i]);
          if(reach>=n-1){
            return true;
          }
          i++;
        }
        return false;
      /*  int s=nums[0];
        int i=0;
        while(i<nums.size()){
         s=nums[i];
         while(s){
         i++;
         s--;
         
         if(i==nums.size()-1){
            return true;}
        }
        }
       return false;*/
    }
};