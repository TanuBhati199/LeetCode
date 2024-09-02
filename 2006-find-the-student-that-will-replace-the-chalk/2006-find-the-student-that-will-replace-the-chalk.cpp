class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
       /* int i=0;
        while(k>=0){
            for(i=0;i<chalk.size();i++){
                if(k>=chalk[i]){
                    k-=chalk[i];
                }
                else{
                    return i;
                }
            }
        }
   return -1;*/
  long long tc=0;
    for(int num:chalk){
       tc+=num;
    }
    k%=tc;
    for(int i=0;i<chalk.size();i++){
        if(k<chalk[i]) return i;
        k-=chalk[i];
    }
    return -1;
 
    }
};