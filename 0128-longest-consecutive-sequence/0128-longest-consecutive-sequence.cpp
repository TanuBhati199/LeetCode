class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> numSet(nums.begin(), nums.end());
        int longest = 0;

        for (int num : numSet) {
            if (numSet.find(num - 1) == numSet.end()) {
                int length = 1;

                while (numSet.find(num + length) != numSet.end()) {
                    length++;
                }

                longest = max(longest, length);
            }
        }

        return longest;
    
           /*if(nums.empty()){
            return 0;
        }
        int count=1;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++){
          if(nums[i]==nums[i+1]){
            continue;
          }  
         else if(nums[i]+1==nums[i+1]){
            count++;
         }
         else{
            break;
         }
        }
    return count;
   */
    }
};