class Solution {
public:
    int scoreOfString(string s) {
       int sum=0;
       for(int i=0;i<s.length()-1;i++){
        int n=s[i]-s[i+1];
        if(n<0)n=-1*n;
        sum+=n;
        } 
       return sum;
    }
};