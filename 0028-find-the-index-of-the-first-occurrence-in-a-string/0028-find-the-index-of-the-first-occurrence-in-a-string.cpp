class Solution {
public:
    int strStr(string haystack, string needle) {
        if(haystack.size()<needle.size() || needle.empty()){
            return -1;
        }
        int res=-1,i,k;
    
      for(int i=0;i<=haystack.size()-needle.size();i++){
         int k=0;
         while(haystack[i+k]==needle[k] && k<needle.size()){
            k++;
            
         }
         if(k==needle.size()){
            return i;
         }}
                
    return -1;}
};