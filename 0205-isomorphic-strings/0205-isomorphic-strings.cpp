class Solution {
public:
    bool isIsomorphic(string s, string t) {
     unordered_map<char,int>list1;
     unordered_map<char,int>list2;   
     for(int i=0;i<s.length();i++){
       if(list1.find(s[i])==list1.end()){
        list1[s[i]]=i;
       } 
       if(list2.find(t[i])==list2.end()){
        list2[t[i]]=i;
       }
       if(list1[s[i]]!=list2[t[i]]){
        return false;
       }
     }
    return true;}
};