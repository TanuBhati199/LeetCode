class Solution {
public:
    int lengthOfLastWord(string s) {
        int length=0;
        bool cont=false;
       for(int i=s.size()-1;i>=0;i--){
        if(s[i]!=' '){
            length++;
            cont=true;
        }
        else if(cont){
            break;
        }
       }
       return length;}
};