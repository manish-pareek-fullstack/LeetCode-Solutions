class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int row=matrix.size();
        int col=matrix[0].size();
        vector<bool>rowzero(row,false);
        vector<bool>colzero(col,false);
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(matrix[i][j]==0){
                    rowzero[i]=true;
                    colzero[j]=true;
                }
            }
        }
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(rowzero[i] || colzero[j]){
                    matrix[i][j]=0;
                }
            }
        }
    }
};