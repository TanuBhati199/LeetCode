class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
     int ans=0;
     int b=edges[0][0];
     int c=edges[0][1];
     if(b==edges[1][0] || b==edges[1][1])return b;
    else return c; 
    }
};