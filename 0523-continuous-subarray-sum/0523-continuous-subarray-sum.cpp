class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
       /* int run=nums.size();
        for(int st=0;st<run-1;st++){
            for(int end=st+1;end<run;end++){
                int sumarr=0;
                for(int i=st;i<=end;i++){
                    sumarr+=nums[i];
                }
                if(sumarr==0 && k==0)return true;
                if(sumarr%k==0 && k!=0)return true;
            }
        }
        return false;*/
         unordered_map<int, int> map;
        map[0] = -1;
        int sum = 0;

        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            int rem = sum % k;

            if (map.find(rem) != map.end()) {
                if (i - map[rem] > 1) {
                    return true;
                }
            } else {
                map[rem] = i;
            }
        }

        return false;
    }
};