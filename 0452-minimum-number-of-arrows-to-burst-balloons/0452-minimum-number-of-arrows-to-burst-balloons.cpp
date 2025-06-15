class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        vector<vector<int>>arr;
        if(points.empty()){
            return 0;
        }
        sort(points.begin(),points.end());
        int start=points[0][0];
        int end=points[0][1];
        
        for(int i=1;i<points.size();i++){
         if(points[i][0]<=end){
            end=min(end,points[i][1]);
         }
         else{
            arr.push_back({start,end});
            start=points[i][0];
            end=points[i][1];

         }
        }
        arr.push_back({start,end});
    return arr.size();
    }
};