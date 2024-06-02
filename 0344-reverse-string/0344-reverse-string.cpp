class Solution {
public:
    void reverseString(vector<char>& s) {
      vector<char>ns;
      for(int i=s.size()-1;i>=0;i--){
        ns.push_back(s[i]);
      } 
      s=ns; 
    }
};