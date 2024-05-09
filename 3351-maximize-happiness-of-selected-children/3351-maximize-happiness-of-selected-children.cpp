class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
           /*long long s=0;
       sort(happiness.begin(),happiness.end()); 
        for(int i=happiness.size()-1;i>0,k>0;i--){
        s+=happiness[i];
        k--;
        for(int j=0;j<i;j++){
            if(happiness[j]>0)
            happiness[j]=happiness[j]-1;
        } 
       } 
       return s;*/
        sort(begin(happiness), end(happiness), greater<int>());
        int i = 0;
        long long res = 0;

        while(k--) {
            happiness[i] = max(happiness[i] - i, 0);
            res += happiness[i++];
        }

        return res;
    }
};