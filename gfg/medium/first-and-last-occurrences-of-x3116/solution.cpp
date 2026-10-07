class Solution {
  public:
    vector<int> find(vector<int>& arr, int x) {
        // code here
        int n=arr.size();
        int start=0,end=n-1;
        
        // first occurrences
        int FirstIndex=-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            
            if(arr[mid]==x){
                FirstIndex=mid;
                end=mid-1;
            }
            else if(arr[mid]<x){
                start=mid+1;
            }
            else{
               end=mid-1;
            }
        }
        
        // last occurrences
         start=0,end=n-1;
        int LastIndex=-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            
            if(arr[mid]==x){
               LastIndex=mid;
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
        ans.push_back(FirstIndex);
        ans.push_back(LastIndex);
        return ans;
    }
};