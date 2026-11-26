class Solution {
  public:
    void addMat(vector<vector<int>>& a, vector<vector<int>>& b) {
        // Code here
        int rowSize=a.size(),colSize=a[0].size();
        for(int i=0;i<rowSize;i++){
            for(int j=0;j<colSize;j++){
                a[i][j]=a[i][j]+b[i][j];
            }
        }
    }
};