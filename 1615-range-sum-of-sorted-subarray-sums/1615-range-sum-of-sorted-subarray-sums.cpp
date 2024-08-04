class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        vector<int>ans;
        int res=0;
        for(int i=0;i<n;i++){
            int s=0;
            for(int j=i;j<n;j++){
            s=s+nums[j];
            ans.push_back(s);
            }
        }
        sort(ans.begin(),ans.end());
        int MOD=1000000007;
        for(int i=left-1;i<right;i++){
            res=(res+ans[i])% MOD;
        }
    return res;}
};
