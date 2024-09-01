class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        vector<vector<int>> ans(m, vector<int>(n));
        int l=original.size();
        if(l!=m*n) return {};
        for(int i=0;i<l;i++){
        for(int j=0;j<m;j++){
            for(int k=0;k<n;k++){
                 ans[j][k]=original[i];
                 i++;
            }
        
        }}
    return ans;}
};