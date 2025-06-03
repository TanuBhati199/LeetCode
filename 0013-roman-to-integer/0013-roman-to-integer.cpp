class Solution {
public:
    int romanToInt(string s) {
        int res=0;
        unordered_map<char,int> comp={
          {'I',1},
          {'V',5},
          {'X',10},
          {'L',50},
          {'C',100},
          {'D',500},
          {'M',1000}  
        };
        for(int i=0;i<s.size()-1;i++){
            if(comp[s[i]]<comp[s[i+1]]) res-=comp[s[i]];
            else res+=comp[s[i]];
        }
        return res+comp[s[s.size()-1]];
    }
};