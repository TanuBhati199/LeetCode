class Solution {
public:
    int maxArea(vector<int>& height) {
        int water=0;
        int left=0;
        int right=height.size()-1;
        while(left<right){
         int val=min(height[left],height[right]);   
         int mid=val*(right-left);
         water=max(water,mid);
         if(height[left]<height[right]){
            left++;
         }
         else{
            right--;
         }
        }
    return water;
    }
};