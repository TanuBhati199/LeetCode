class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        for(int j=0;j<nums.size()-1;j++){
            for(int i=j+1;i<=k+j &&i<nums.size();i++){
                if(nums[i]==nums[j] && (i-j)<=k){
                    return true;
                }

            }
        }
        
   return false;
    }
};