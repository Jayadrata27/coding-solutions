class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n=arr.size();
        int start=0,end=n-1;
        int ans=n;
        while(start<=end){
            int mid=start+(end-start)/2;
            int missingNumber=arr[mid]-(mid+1);
            if(missingNumber<k){
                start=mid+1;
            }
            else{
                ans=mid;
                end=mid-1;
            }
        }
        return ans+k;
    }
};