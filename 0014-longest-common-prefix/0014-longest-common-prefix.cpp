class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()) return "";
        string pref=strs[0];
        int preflen=pref.length();
        for(int i=1;i<strs.size();i++){
          string s=strs[i];
          while(preflen>s.length() || pref!=s.substr(0,preflen)){
            preflen--;
            if(preflen==0){
                return "";
            }
            pref=pref.substr(0,preflen);
          }
        }
    return pref;}
};