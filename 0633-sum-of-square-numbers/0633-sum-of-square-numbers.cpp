class Solution {
public:
    bool judgeSquareSum(int c) {
     //   if(c==1 || c==0)return true;
        for(long a=0;a*a<=c;a++){
         double b=sqrt(c-a*a);
        if(b==(int)b)return true;
        }
    return false;
    }
};