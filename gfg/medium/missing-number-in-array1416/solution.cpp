class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here
        int n=arr.size();
        
        int x=0;
        for(int i=0;i<n;i++){
            x=arr[i]^x;
        }
        int y=0;
        for(int j=1;j<=n+1;j++){
            y=y^j;
        }
        return x^y;
    }
};