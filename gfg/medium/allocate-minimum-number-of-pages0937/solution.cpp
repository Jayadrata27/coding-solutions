#define ll long long 
class Solution {
  public:
  bool allocationBook(ll int maxPage,vector<int> &arr, int k){
      int n=arr.size();
      ll int count=1,page=arr[0];
      for(int i=1;i<n;i++){
          page+=arr[i];
          if(page>maxPage){
              count++;
              page=arr[i];
          }
      }
      return count<=k;
  };
    int findPages(vector<int> &arr, int k) {
        // code here
        int n=arr.size();
        
        if(k>n){
            return -1;
        }
        ll int start=0,end=0,ans;
        for(int i=0;i<n;i++){
            start=max(start,(ll)arr[i]);
            end+=(ll)arr[i];
        }
        while(start<=end){
            ll int mid=start+(end-start)/2;
            if(allocationBook(mid,arr,k)){
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