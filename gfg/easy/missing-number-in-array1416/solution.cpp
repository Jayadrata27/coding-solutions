class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here
        int n=arr.size();
        int x=0;
        for(int i=0;i<n;i++){
           x=x^arr[i]; 
        }
        
        int y=0;
        for(int i=1;i<=n+1;i++){
            y=y^i;
        }
        
        return x^y;
    }
};