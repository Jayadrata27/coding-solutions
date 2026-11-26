class Solution {
  public:
    bool searchMatrix(vector<vector<int>> &mat, int x) {
        // code here
        int row=mat.size(),col=mat[0].size();
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(mat[i][j]==x){
                    return true;
                }
            }
        }
        return false;
    }
};