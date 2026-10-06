class Solution {
  public:
    bool binarySearch(vector<int>& arr, int k) {
        // code here
        int n=arr.size();
        int start=0,end=n-1;
       
        while(start<=end){
            int mid=start+(end-start)/2;
            
            if(arr[mid]==k){
                return true;
            }
            else if(arr[mid]<=k){
                start=start+1;
            }
            else{
                end=end-1;
            }
        }
        return false;
     
    }
};