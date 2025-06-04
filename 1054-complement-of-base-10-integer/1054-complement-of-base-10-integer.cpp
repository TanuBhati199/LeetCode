class Solution {
public:
    int bitwiseComplement(int n) {
       int m=n;
       int mark=0;
       if(n==0){
        return 1;
       }
       while(m!=0){
        mark=(mark<<1)|1;
        m=m>>1;
       }
       return (~n & mark);
    }
};