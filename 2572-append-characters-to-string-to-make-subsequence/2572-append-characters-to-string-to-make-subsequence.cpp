class Solution {
public:
    int appendCharacters(string s, string t) {
        /*int ans=t.size();
        if(s[0]!=t[0]) return ans;
      
        for(int i=0;i<t.size();i++){
        if(s[i]==t[i]) ans--;
        }
        return ans;*/
        int s_ind=0,t_ind=0;
        int s_len=s.size(),t_len=t.size();
        while(s_ind<s_len && t_ind<t_len){
            if(s[s_ind]==t[t_ind]){
                t_ind++;
            }
            s_ind++;
        }
        return t_len-t_ind;
    }
};