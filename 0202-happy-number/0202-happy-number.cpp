class Solution {
public:
    bool isHappy(int n) {
        if(n==1|| n==7){
            return true;
        }else if(n<10){
            return false;}
       else{
        int cal=0;
        while(n){
            int k=n%10;
           cal+=(k*k);
           n=n/10;
        }return isHappy(cal);
       }  }
};