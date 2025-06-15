class Solution {
public:
    bool isValid(string s) {
      stack<char>mystk;
      if(s.size()<=1){
        return false;
      }
      for(int i=0;i<s.size();i++){
      if(mystk.empty()){
        mystk.push(s[i]);
      }
      else if(s[i]=='(' || s[i]=='{' || s[i]=='['){
        mystk.push(s[i]);
      }
      else{
        char top=mystk.top();
        if((s[i]==')' && top=='(')|| (s[i]=='}' && top=='{')|| (s[i]==']' && top=='[')){
            mystk.pop();
        }
        else{
            return false;
        }
      }
      }  
   return mystk.empty(); }
};