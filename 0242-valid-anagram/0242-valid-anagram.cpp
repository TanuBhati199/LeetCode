class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }
        unordered_map<char,int>character;
       for(char ch:s){
        character[ch]++;
       }
       for(char ch:t){
        if(character.find(ch)==character.end()||character[ch]==0){
            return false;
        }
        character[ch]--;
       }
    return true;}
};