class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
       int currcost=0;
       int maxlen=0;
       int start=0;
       for(int i=0;i<s.length();i++) {
          currcost+=abs(s[i]-t[i]);
          while(currcost>maxCost){
          currcost-=abs(s[start]-t[start]);
          start++;
          }
         maxlen=max(maxlen,i-start+1);
       }
       return maxlen;
    }
};