class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int ans=0;
        int l=0;
        int h=n-1;
        while(l<h){
            int area=min(height[l],height[h])*(h-l);
            ans=max(ans,area);
            if(height[l]<height[h]){l++;}
            else{ h--;}
        }
    return ans;}
};