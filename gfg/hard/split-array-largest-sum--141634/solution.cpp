class Solution {
  public:
  bool isSubArrayPossible(int maxSum,vector<int>& arr, int k){
      int n=arr.size();
      int subArrCount=1,totalSum=arr[0];
      for(int i=1;i<n;i++){
          totalSum+=arr[i];
          if(totalSum>maxSum){
              subArrCount++;
              totalSum=arr[i];
          }
      }
      return subArrCount<=k;
  };
    int splitArray(vector<int>& arr, int k) {
        // code here
        int n=arr.size();
        int start=0,end=0,ans;
        for(int i=0;i<n;i++){
            start=max(start,arr[i]);
            end+=arr[i];
        }
        while(start<=end){
            int mid=start+(end-start)/2;
            
            if(isSubArrayPossible(mid,arr,k)){
                ans=mid;
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        return ans;
    }
};