# Binary Search

![Difficulty](https://img.shields.io/badge/Difficulty-Basic-red)

## Problem

Given an array  **arr[],** sorted in ascending order and an integer  **k**. Return true if k is present in the array, otherwise, false.

 **Examples:** 

```
Input: arr[] = [1, 2, 3, 4, 6], k = 6
Output: true
Exlpanation: Since, 6 is present in the array at index 4 (0-based indexing), output is true.
```

```
Input: arr[] = [1, 2, 4, 5, 6], k = 3
Output: false
Exlpanation: Since, 3 is not present in the array, output is false.
```

```
Input: arr[] = [2, 3, 5, 6], k = 1
Output: false1 ≤ arr[i] ≤ 106
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-07T08:22:46.588Z  

```cpp
class Solution {
  public:
    bool binarySearch(vector<int>& arr, int k) {
        // code here
        int n=arr.size();
        int start=0,end=n-1;
       
        while(start<=end){
            int mid=start+(end-start)/2;
            
            if(arr[mid]==k){
                return true;
            }
            else if(arr[mid]<=k){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return false;
     
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/who-will-win-1587115621/1)