class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
     /*   int k=0;
     for(int i=0;i<digits.size();i++){
       k=k*10+digits[i];
     }
     k=k+1;
     vector<int>res;
    while(k>0){
        int r=k%10;
        k=k/10;
        res.push_back(r);
     }
     reverse(res.begin(),res.end());
    return res;*/
   int n=digits.size();
   for(int i=n-1;i>=0;i--){
    if(i==n-1){
        digits[i]++;
    }
    if(digits[i]==10){
        digits[i]=0;
        if(i!=0)digits[i-1]++;
    
else{
    digits.push_back(0);
    digits[i]=1;
}   }}
   return digits; }
};