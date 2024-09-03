class Solution {
public:
    int getLucky(string s, int k) {
     string sum="";
     for(char ch:s){
        sum=sum+to_string(ch-'a'+1);         
     }
     while(k>0){
        int temp=0;
       for(int x:sum){
        temp+=x-'0';
        }
        sum=to_string(temp);
        k--;
     }   
    return stoi(sum);
    }
};