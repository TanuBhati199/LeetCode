class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       unordered_map<string,vector<string>>arr;
       vector<vector<string>>res;
      for(string &s:strs){
      string key=s;
      sort(key.begin(),key.end());
       arr[key].push_back(s);
       } 
       for(auto &s:arr){
       res.push_back(s.second);
       }
    return res;
    }
};