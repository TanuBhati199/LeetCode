class Solution {
public:
    int longestPalindrome(string s) {
        unordered_set<char> charset;
        int len=0;
        for(char ch:s){
            if(charset.find(ch)!=charset.end()){
                charset.erase(ch);
                len+=2;
            }
            else charset.insert(ch);
        }
        if(!charset.empty()) len+=1;
        return len;
    }
};