class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows>s.size()|| numRows==1){
            return s;
        }
      vector<vector<char>>res(numRows);
      int idx=0;
      int d=1;
      for(char c:s){
        res[idx].push_back(c);
        if(idx==0){
            d=1;
        }
        else if(idx==numRows-1){
            d=-1;
        }
        
        idx+=d;
      }
      string out;
      for(const auto&row:res){
      for(char c:row){
        out+=c;
      }
      }
      
    return out;}
};