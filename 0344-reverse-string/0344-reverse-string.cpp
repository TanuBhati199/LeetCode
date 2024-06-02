class Solution {
public:
    void reverseString(vector<char>& s) {
    /*  vector<char>ns;
      for(int i=s.size()-1;i>=0;i--){
        ns.push_back(s[i]);
      } 
      s=ns;*/
      int i=0,j=s.size()-1;
      while(i<j){
        int temp=s[i];
        s[i]=s[j];
        s[j]=temp;
        i++;
        j--;
      } 
    }
};