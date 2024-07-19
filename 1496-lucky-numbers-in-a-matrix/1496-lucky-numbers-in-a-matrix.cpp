class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        vector<int> ans;
        
        for (int i = 0; i < matrix.size(); ++i) {
            int minElement = matrix[i][0];
            int minIndex = 0;
            
            // Find the minimum element in the current row
            for (int j = 1; j < matrix[0].size(); ++j) {
                if (matrix[i][j] < minElement) {
                    minElement = matrix[i][j];
                    minIndex = j;
                }
            }
            
            // Check if this minimum element is the maximum in its column
            bool isLucky = true;
            for (int k = 0; k < matrix.size(); ++k) {
                if (matrix[k][minIndex] > minElement) {
                    isLucky = false;
                    break;
                }}
            if (isLucky) {
                ans.push_back(minElement);
            }}
        return ans;
    }
};
