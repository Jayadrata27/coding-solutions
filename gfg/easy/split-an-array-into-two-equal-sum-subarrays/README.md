# Two Equal Sum Subarrays

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given an array of integers  **arr[]**, return  **true** if it is possible to split it in two subarrays (without reordering the elements), such that the sum of the two subarrays are equal. If it is not possible then return  **false**.

 **Examples:** 

```
Input: arr[] = [1, 2, 3, 4, 5, 5]
Output: true
Explanation: We can divide the array into [1, 2, 3, 4] and [5, 5]. The sum of both the subarrays are 10.
```

```
Input: arr[] = [4, 3, 2, 1]
Output: false
Explanation: We cannot divide the array into two subarrays with equal sum.
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-22T02:51:38.322Z  

```cpp
class Solution {
  public:
    bool canSplit(vector<int>& arr) {
        // code here
        int n=arr.size();
        int totalSum=0;
        for(int i=0;i<n;i++){
            totalSum+=arr[i];
        }
        int targetSum=totalSum/2;
        if(totalSum%2){
            return false;
        }
        int prefixSum=0;
        for(int i=0;i<n-1;i++){
           prefixSum+=arr[i];
           if(prefixSum==targetSum){
               return true;
           }
        }
        return false;
    }
};

```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/split-an-array-into-two-equal-sum-subarrays/1)