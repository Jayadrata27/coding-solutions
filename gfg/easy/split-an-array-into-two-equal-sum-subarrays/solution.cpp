class Solution {
  public:
    bool canSplit(vector<int>& arr) {
        // code here
        int n=arr.size();
        int totalSum=0;
        for(int i=0;i<n;i++){
            totalSum+=arr[i];
        }
        int targetSum=totalSum/2;
        if(totalSum%2){
            return false;
        }
        int prefixSum=0;
        for(int i=0;i<n-1;i++){
           prefixSum+=arr[i];
           if(prefixSum==targetSum){
               return true;
           }
        }
        return false;
    }
};
