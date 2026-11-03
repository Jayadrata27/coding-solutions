class Solution {
  public:
    int kthMissing(vector<int> &arr, int k) {
        // code here
        int n=arr.size();
        
        for(int i=0;i<n;i++){
            int totalMissing=arr[i]-(i+1);
             
            if(totalMissing>=k){
                return k+i;
            }
        }
        return k+n;
    }
};