class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int>ans;
        int c1=count(nums.begin(),nums.end(),0);
        int c2=count(nums.begin(),nums.end(),1);
        int c3=count(nums.begin(),nums.end(),2);

        for(int i=0;i<c1;i++){
            ans.push_back(0);
        }
         for(int i=0;i<c2;i++){
            ans.push_back(1);
        }
         for(int i=0;i<c3;i++){
            ans.push_back(2);
        }
        nums=ans;
      //  return ans;
    }
};