class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int n=arr.size();
        int largest=arr[0];
        for(int i=1;i<n;i++){
            if(largest<arr[i]){
                largest=arr[i];
            }
        }
        int secondLargest=-1;
        for(int j=0;j<n;j++){
            if(arr[j]==largest){
                continue;
            }
            else if(arr[j]>secondLargest){
                secondLargest=arr[j];
            }
        }
        return secondLargest;
    }
};