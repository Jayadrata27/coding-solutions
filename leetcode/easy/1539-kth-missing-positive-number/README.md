# Kth Missing Positive Number

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given an array `arr` of positive integers sorted in a  **strictly increasing order**, and an integer `k`.

Return  *the*  `kth`  ***positive**  integer that is  **missing**  from this array.*

 

 **Example 1:** 

```
Input: arr = [2,3,4,7,11], k = 5
Output: 9
Explanation: The missing positive integers are [1,5,6,8,9,10,12,13,...]. The 5th missing positive integer is 9.

```

 **Example 2:** 

```
Input: arr = [1,2,3,4], k = 2
Output: 6
Explanation: The missing positive integers are [5,6,7,...]. The 2nd missing positive integer is 6.

```

 

 **Constraints:** 

- 1 <= arr.length <= 1000
- 1 <= arr[i] <= 1000
- 1 <= k <= 1000
- arr[i] < arr[j] for 1 <= i < j <= arr.length

 

 **Follow up:** 

Could you solve this problem in less than O(n) complexity?

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 13.2 MB (beats 87.46%)  
**Submitted:** 2026-11-03T14:29:53.994Z  

```cpp
class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n=arr.size();
        int missingNumber=k;
        for(int i=0;i<n;i++){
            if(arr[i]>missingNumber){
                return missingNumber;
            }
            else{
                missingNumber++;
            }
        }
        return missingNumber;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/kth-missing-positive-number/)