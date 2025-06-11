class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char,int>res1;
        unordered_map<string,int>res2;
        stringstream sst(s);
        string word;
        vector<string>words;
        while(sst>>word){
            words.push_back(word);
        }
        if(words.size()!=pattern.size()){
            return false;
        }
        for(int i=0;i<pattern.size();i++){
            if(res1.find(pattern[i])==res1.end()){
             res1[pattern[i]]=i;   
            }
            if(res2.find(words[i])==res2.end()){
                res2[words[i]]=i;
            }
            if(res1[pattern[i]]!=res2[words[i]]){
            return false;
            }
        }
    return true;}
};