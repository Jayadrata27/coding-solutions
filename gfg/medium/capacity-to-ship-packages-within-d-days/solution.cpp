class Solution {
  public:
  bool isCapacity(int maxCapacity,vector<int>& arr, int d){
      int n=arr.size();
      int count=1,capacity=arr[0];
      for(int i=1;i<n;i++){
          capacity+=arr[i];
          
          if(capacity>maxCapacity){
              count++;
              capacity=arr[i];
          }
      }
      return count<=d;
  }
    int leastWeightCapacity(vector<int>& arr, int d) {
        // code here
        int n=arr.size();
        int start=0,end=0,ans;
        for(int i=0;i<n;i++){
            start=max(start,arr[i]);
            end+=arr[i];
        }
        
        while(start<=end){
            int mid=start+(end-start)/2;
            
            if(isCapacity(mid,arr,d)){
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