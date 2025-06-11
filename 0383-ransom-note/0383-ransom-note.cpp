class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>check;
        for(int c:magazine){
            check[c]++;
        }
        for(int s:ransomNote){
            if(check[s]<=0){
                return false;
            }
            check[s]--;
        }
        return true;
    }
};