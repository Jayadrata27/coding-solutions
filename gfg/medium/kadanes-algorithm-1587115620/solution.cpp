class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        // Code here
        int n=arr.size();
        int ans=INT_MIN;
        int subSum=0;
        for(int i=0;i<n;i++){
            if(subSum<0){
                subSum=arr[i];
            }
            else{
                subSum+=arr[i];
            }
            ans=max(ans,subSum);
        }
        return ans;
    }
};