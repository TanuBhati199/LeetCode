class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int i_sat=0;
        int c_sat=0,max_sat=0;
        for(int i=0;i<grumpy.size();i++){
            if(grumpy[i]==0){
                i_sat+=customers[i];
            }else if(i<minutes){
             c_sat+=customers[i];
            }
        }
        max_sat=c_sat;
        for(int i=minutes;i<grumpy.size();i++){
            c_sat+=customers[i]*grumpy[i];
            c_sat-=customers[i-minutes]*grumpy[i-minutes];
            max_sat=max(max_sat,c_sat);
        }
        return i_sat+max_sat;
    }
};