# Kth Missing Positive in Sorted

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given a sorted array of distinct positive integers   arr[]   and a number  **k**, You need to find the kth positive number that is missing from the arr[].

 **Examples:** 

```
Input: arr[] = [2, 3, 4, 7, 11], k = 5
Output: 9
Explanation: Missing are 1, 5, 6, 8, 9, 10… and 5th missing number is 9.

```

```
Input: arr[] = [1, 2, 3], k = 2
Output: 5
Explanation: Missing are 4, 5, 6… and 2nd missing number is 5.

```

```
Input: arr[] = [3, 5, 9, 10, 11, 12], k = 2
Output: 2
Explanation: Missing are 1, 2, 4, 6… and 2nd missing number is 2.
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-03T16:31:36.919Z  

```cpp
class Solution {
  public:
    int kthMissing(vector<int> &arr, int k) {
        // code here
        int n=arr.size();
        
        for(int i=0;i<n;i++){
            int totalMissing=arr[i]-(i+1);
             
            if(totalMissing>=k){
                return k+i;
            }
        }
        return k+n;
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/kth-missing-positive-number-in-a-sorted-array/1)