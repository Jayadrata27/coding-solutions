class Solution {
  public:
  bool allocationPossible(int minDistance,vector<int> &arr, int k){
      int n=arr.size();
      int count=1,cowPosition=arr[0];
      for(int i=1;i<n;i++){
          if(arr[i]-cowPosition>=minDistance){
              count++;
              cowPosition=arr[i];
          }
      }
      return count>=k;
  };
    int aggressiveCows(vector<int> &arr, int k) {
        // code here
        int n=arr.size();
        sort(arr.begin(),arr.end());
        int start=1,end=arr[n-1]-arr[0],ans;
        while(start<=end){
            int mid=start+(end-start)/2;
            
            if(allocationPossible(mid,arr,k)){
                ans=mid;
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return ans;
    }
};