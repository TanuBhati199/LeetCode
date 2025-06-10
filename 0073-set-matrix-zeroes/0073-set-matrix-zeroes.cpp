class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int row=matrix.size();
        int cols=matrix[0].size();
        vector<int>matRow(row,false);
        vector<int>matCol(cols,false);
        for(int i=0;i<row;i++){
            for(int j=0;j<cols;j++){
                if(matrix[i][j]==0){
                    matRow[i]=true;
                    matCol[j]=true;
                }
            }
        }
        for(int i=0;i<row;i++){
            for(int j=0;j<cols;j++){
                if(matRow[i] || matCol[j]){
                    matrix[i][j]=0;
                }
            }
        }
    }
};