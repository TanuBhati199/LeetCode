class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int res=0;
      vector<int>v(heights);
      sort(heights.begin(),heights.end());
      for(int i=0;i<heights.size();i++){
        if(heights[i]!=v[i]) res++;
      }
      return res;
  
    }
};