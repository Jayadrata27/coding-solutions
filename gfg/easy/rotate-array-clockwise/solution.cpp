class Solution {
  public:
    void rotateclockwise(vector<int>& arr, int k) {
        // code here
        int n=arr.size();
        vector<int>nums(n);
        
        for(int i=0;i<n;i++){
            nums[(i+k)%n]=arr[i];
        }
        
        for(int i=0;i<n;i++){
            arr[i]=nums[i];
        }
    }
};
