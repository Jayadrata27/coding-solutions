# Sum of Unique Elements

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

You are given an integer array `nums`. The unique elements of an array are the elements that appear  **exactly once**  in the array.

Return  *the  **sum**  of all the unique elements of* `nums`.

 

 **Example 1:** 

```
Input: nums = [1,2,3,2]
Output: 4
Explanation: The unique elements are [1,3], and the sum is 4.

```

 **Example 2:** 

```
Input: nums = [1,1,1,1,1]
Output: 0
Explanation: There are no unique elements, and the sum is 0.

```

 **Example 3:** 

```
Input: nums = [1,2,3,4,5]
Output: 15
Explanation: The unique elements are [1,2,3,4,5], and the sum is 15.

```

 

 **Constraints:** 

- 1 <= nums.length <= 100
- 1 <= nums[i] <= 100

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 10.5 MB (beats 81.13%)  
**Submitted:** 2026-10-04T07:41:04.231Z  

```cpp
class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++){
            bool found=false;
            for(int j=0;j<n;j++){
                if(i==j){
                    continue;
                }
                else if(nums[i]==nums[j]){
                    found=true;
                    break;
                }
            }
            if(found==false){
                sum+=nums[i];
            }

        }
        return sum;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/sum-of-unique-elements/)