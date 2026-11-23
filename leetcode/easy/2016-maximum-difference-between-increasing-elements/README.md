# Maximum Difference Between Increasing Elements

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given a  **0-indexed**  integer array `nums` of size `n`, find the  **maximum difference**  between `nums[i]` and `nums[j]` (i.e., `nums[j] - nums[i]`), such that `0 <= i < j < n` and `nums[i] < nums[j]`.

Return  *the  **maximum difference**.* If no such `i` and `j` exists, return `-1`.

 

 **Example 1:** 

```
Input: nums = [7,1,5,4]
Output: 4
Explanation:
The maximum difference occurs with i = 1 and j = 2, nums[j] - nums[i] = 5 - 1 = 4.
Note that with i = 1 and j = 0, the difference nums[j] - nums[i] = 7 - 1 = 6, but i > j, so it is not valid.

```

Original
C++
 **Example 2:** 

```
Input: nums = [9,4,3,2]
Output: -1
Explanation:
There is no i and j such that i < j and nums[i] < nums[j].

```

 **Example 3:** 

```
Input: nums = [1,5,2,10]
Output: 9
Explanation:
The maximum difference occurs with i = 0 and j = 3, nums[j] - nums[i] = 10 - 1 = 9.

```

 

 **Constraints:** 

- n == nums.length
- 2 <= n <= 1000
- 1 <= nums[i] <= 109

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 12.4 MB (beats 5.12%)  
**Submitted:** 2026-11-23T15:11:46.698Z  

```cpp
class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int n=nums.size();
        vector<int>suffixMax(n,0);
        suffixMax[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--){
            suffixMax[i]=max(nums[i],suffixMax[i+1]);
        }

        int ans=-1;
        for(int i=0;i<n-1;i++){
           if(suffixMax[i+1]>nums[i]){
              ans=max(ans,suffixMax[i+1]-nums[i]);
           }
        }
        return ans;
    }
}; 
```

---

[View on LeetCode](https://leetcode.com/problems/maximum-difference-between-increasing-elements/)