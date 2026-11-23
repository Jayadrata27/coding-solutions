# Max Prefix Sum For Range

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an integer array  **arr[]**  and a 2D array  **queries[][],**  where each query consists of two indices [left, right], defining a range in the array (inclusive).

For each query, find the maximum prefix sum within the given range arr[left..right].

 **Examples:** 

```
Input: arr[] = [-1, 2, 3, -5], queries[][] = [[0, 3], [1, 3]]
Output:[4, 5]
Explanation: For the range [0, 3], the prefix sums are [-1, 1, 4, -1]. The maximum is 4.
For the range [1, 3], the prefix sums are [2, 5, 0]. The maximum is 5.
```

```
Input: arr[] = [1, -2, 3, 4, -5], queries[][] = [[0, 4], [2, 3], [1, 3]]
Output: [6, 7, 5]
Explanation: For the range [0, 4], the prefix sums are [1, -1, 2, 6, 1]. The maximum is 6. 
For the range [2, 3], the prefix sums are [3, 7]. The maximum is 7. 
For the range [1, 3], the prefix sums are [-2, 1, 5]. The maximum is 5.
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-23T20:40:32.064Z  

```cpp
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
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/maximum-prefix-sum-for-a-given-range0227/1)