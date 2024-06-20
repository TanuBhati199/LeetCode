class Solution {
public:
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());
        int lo=1;
        int hi=(position.back()-position[0])/(m-1);
        int ans=1;
        while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(place(position,mid,m)){
            ans=mid;
            lo=mid+1;}
        else hi=mid-1;
        }
        return ans;
    }
private:
    bool place(const vector<int>&new_arr,int dis,int fill){
        int c=1;
        int lt=new_arr[0];
        for(int i=1;i<new_arr.size();i++){
            if(new_arr[i]-lt>=dis){
                c++;
                lt=new_arr[i];
            }
            if(c>=fill){
                return true;
            }}
            return false;
    }

};