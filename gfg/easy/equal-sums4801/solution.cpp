class Solution {
  public:
    vector<int> equalSum(vector<int>& arr) {
        // code here
        int n=arr.size();
        int totalSum=0;
        
        for(int i=0;i<n;i++){
            totalSum+=arr[i];
        }
        
        vector<int>ans(3);
        int leftSum=0,rightSum;
        ans[0]=INT_MAX;
        for(int i=0;i<n-1;i++){
            leftSum+=arr[i];
            rightSum=totalSum-leftSum;
            
            if(abs(leftSum-rightSum)>ans[0]){
                continue;
            }
            
            if(rightSum>leftSum){
                ans[0]=rightSum-leftSum;
                ans[1]=i+2;
                ans[2]=1;
            }
            else{
                ans[0]=leftSum-rightSum;
                ans[1]=i+2;
                ans[2]=2;
            }
        }
        return ans;
    }
};