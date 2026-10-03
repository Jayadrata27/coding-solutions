class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here
        long long int n=arr.size();
    
        long long int size=n+1;
        long long int calsum=size*(size+1)/2;
        
        long long int sum=0;
        for(int i=0;i<n;i++){
           sum=sum+arr[i];
        }
        
        return calsum-sum;
    }
};