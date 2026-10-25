class Solution {
  public:
    int floorSqrt(int n) {
        // code here
        int ans=-1;
        if(n<=1){
            return n;
        }
        int start=1,end=n;
        while(start<=end){
            int mid=start+(end-start)/2;
            
            if(mid*mid==n){
                return mid;
            }
            else if(mid*mid>n){
                end=mid-1;
            }
            else{
                ans=mid;
                start=mid+1;
            }
        }
        return ans;
    }
};