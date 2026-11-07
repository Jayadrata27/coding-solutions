# Capacity To Ship Packages Within d Days

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given  **arr[]**  of weights, find the minimum boat capacity to ship all weights within  **d**  days.

- The items are loaded in the same order as their appearance.
- The total weight should not exceed the computed capacity on any day.

 **Examples:** 

```
Input: arr[] = [1, 2, 1], d = 2
Output: 3
Explanation: We can ship with boat capacity 3 in 2 days.
Day 1- 1, 2
Day 2- 1

```

```
Input: arr[] = [9, 8, 10], d = 3
Output: 10
Explanation: We can ship with boat capacity 10 in 3 days.
Day 1- 9
Day 2- 8
Day 3- 10
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-07T05:43:55.912Z  

```cpp
class Solution {
  public:
  bool isCapacity(int maxCapacity,vector<int>& arr, int d){
      int n=arr.size();
      int count=1,capacity=arr[0];
      for(int i=1;i<n;i++){
          capacity+=arr[i];
          
          if(capacity>maxCapacity){
              count++;
              capacity=arr[i];
          }
      }
      return count<=d;
  }
    int leastWeightCapacity(vector<int>& arr, int d) {
        // code here
        int n=arr.size();
        int start=0,end=0,ans;
        for(int i=0;i<n;i++){
            start=max(start,arr[i]);
            end+=arr[i];
        }
        
        while(start<=end){
            int mid=start+(end-start)/2;
            
            if(isCapacity(mid,arr,d)){
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

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/capacity-to-ship-packages-within-d-days/1)