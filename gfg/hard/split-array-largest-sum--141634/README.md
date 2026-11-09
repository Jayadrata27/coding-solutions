# Split Array Largest Sum

![Difficulty](https://img.shields.io/badge/Difficulty-Hard-red)

## Problem

Given an array  **arr[]**  and an integer  **k**, divide the array into  **k**  contiguous subarrays such that the  **maximum** sum among these subarrays is  **minimized**. Find this minimum possible  **maximum sum**.

 **Examples:** 

```
Input: arr[] = [1, 2, 3, 4], k = 3
Output: 4
Explanation: Optimal Split is [1, 2], [3], [4]. Maximum sum of all subarrays is 4, which is minimum possible for 3 splits.

```

```
Input: arr[] = [1, 1, 2], k = 2
Output: 2
Explanation: Splitting the array as [1, 1] and [2] is optimal. This results in a maximum sum subarray of 2.
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-09T06:21:06.517Z  

```cpp
class Solution {
  public:
  bool isSubArrayPossible(int maxSum,vector<int>& arr, int k){
      int n=arr.size();
      int subArrCount=1,totalSum=arr[0];
      for(int i=1;i<n;i++){
          totalSum+=arr[i];
          if(totalSum>maxSum){
              subArrCount++;
              totalSum=arr[i];
          }
      }
      return subArrCount<=k;
  };
    int splitArray(vector<int>& arr, int k) {
        // code here
        int n=arr.size();
        int start=0,end=0,ans;
        for(int i=0;i<n;i++){
            start=max(start,arr[i]);
            end+=arr[i];
        }
        while(start<=end){
            int mid=start+(end-start)/2;
            
            if(isSubArrayPossible(mid,arr,k)){
                ans=mid;
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        return ans;
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/split-array-largest-sum--141634/1)