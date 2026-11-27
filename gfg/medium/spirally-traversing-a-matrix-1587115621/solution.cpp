class Solution {
  public:
    vector<int> spirallyTraverse(vector<vector<int>> &mat) {
      // code here
      int rowStart = 0, colStart = 0, rowEnd = mat.size() - 1,
          colEnd = mat[0].size() - 1;
      vector<int> ans;
      while (rowStart <= rowEnd && colStart <= colEnd) {
        // print 1st row
        for (int j = colStart; j <= colEnd; j++) {
          ans.push_back(mat[rowStart][j]);
        }
        rowStart++;
        // print last col
        for (int i = rowStart; i <= rowEnd; i++) {
          ans.push_back(mat[i][colEnd]);
        }
        colEnd--;
        // print last row in reverse
        if (rowStart <= rowEnd) {
          for (int j = colEnd; j >= colStart; j--) {
            ans.push_back(mat[rowEnd][j]);
          }
          rowEnd--;
        }
        // print 1st col
        if (colStart <= colEnd) {
          for (int i = rowEnd; i >= rowStart; i--) {
            ans.push_back(mat[i][colStart]);
          }
          colStart++;
        }
      }
      return ans;
    }
};