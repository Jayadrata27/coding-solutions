class Solution {
  public:
    vector<int> find(vector<int>& arr, int x) {
        // code here
        int n=arr.size();
        int firstIndex=-1;
        
        int start=0,end=n-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            
            if(arr[mid]==x){
                firstIndex=mid;
                end=mid-1;
            }
            else if(arr[mid]<x){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        
        
        int lastIndex=-1;
        start=0,end=n-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            
            if(arr[mid]==x){
                lastIndex=mid;
                start=mid+1;
            }
            else if(arr[mid]<x){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        
        vector<int>ans;
        ans.push_back(firstIndex);
        ans.push_back(lastIndex);
        
        return ans;
    }
};