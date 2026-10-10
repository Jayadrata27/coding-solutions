class Solution {
  public:
    void rotateclockwise(vector<int>& arr, int k) {
        // code here
        int n=arr.size();
        k=k%n;
        
        int i=0,j=n-1;
         while(i<j){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            i++;
            j--;
        }
         i=0,j=k-1;
        while(i<j){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            i++;
            j--;
        }
        i=k,j=n-1;
         while(i<j){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            i++;
            j--;
        }
    }
};
