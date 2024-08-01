class Solution {
public:
    int countSeniors(vector<string>& details) {
        int ans=0;
        for(string ch :details){
         char tens=ch[11];
         char ones=ch[12];
          if(tens>'6'||(tens=='6' && ones>'0'))ans++;
        }
    return ans;}
};