class Solution {
  public:
    vector<int> maxPrefixSumQueries(vector<int>& arr, vector<vector<int>>& queries) {
        // code here
        vector<int>result;
        for(auto& q:queries){
            int left=q[0],right=q[1];
            int subSum=0;
            int ans=INT_MIN;
            
            for(int i=left;i<=right;i++){
                subSum+=arr[i];
                ans=max(ans,subSum);
            }
            result.push_back(ans);
        }
        return result;
        
    }
};