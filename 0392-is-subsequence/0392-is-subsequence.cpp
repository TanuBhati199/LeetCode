class Solution {
public:
    bool isSubsequence(string s, string t) {
       /* if(s.size()>t.size()){
            return false;
        }
        int n=t.size();
        int j=0;
       for(int i=0;i<s.size();i++){
            while(j<n){
            if(s[i]==t[j]){
              break;
              }
            else if(j==n-1){
                return false;
            }
            j++;
          }
        }
       return true;
       */
       
       int sp=0,tp=0;
       while(sp<s.size()&& tp<t.size()){
         if(s[sp]==t[tp]){
            sp++;
         }
         tp++;
       }
       return sp==s.size();
       }
};