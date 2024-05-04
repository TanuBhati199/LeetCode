class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        sort(strs.begin(),strs.end());
        int s=strs.size()-1;
        string first=strs[0];
        string last=strs[s];
        for(int i=0;i<min(first.size(),last.size());i++){
         if(first[i]!=last[i]){
            return ans;
         }
         ans+=first[i];
        }
    return ans;}
};