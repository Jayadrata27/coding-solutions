class Solution {
  public:
  bool isPaintPossible(int maxPaint,vector<int>& arr,int k){
      int n=arr.size();
      int count=1,paint=arr[0];
      for(int i=1;i<n;i++){
          paint+=arr[i];
          
          if(paint>maxPaint){
              count++;
              paint=arr[i];
          }
      }
      return count<=k;
  }
    int minTime(vector<int>& arr, int k) {
        // code here
        int n=arr.size();
        
        int start=0,end=0,ans;
        for(int i=0;i<n;i++){
            start=max(start,arr[i]);
            end=end+arr[i];
        }
        while(start<=end){
            int mid=start+(end-start)/2;
            
            if(isPaintPossible(mid,arr,k)){
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