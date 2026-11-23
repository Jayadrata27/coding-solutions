# Kth Missing Positive Number

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given an array `arr` of positive integers sorted in a  **strictly increasing order**, and an integer `k`.

Return  *the*  `kth`  ***positive**  integer that is  **missing**  from this array.*

 

Original
C++
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
**Memory:** 13.2 MB (beats 47.22%)  
**Submitted:** 2026-11-23T21:36:50.153Z  

```cpp
class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n=arr.size();
        int start=0,end=n-1;
        int ans=n;
        while(start<=end){
            int mid=start+(end-start)/2;
            int missingNumber=arr[mid]-(mid+1);
            if(missingNumber<k){
                start=mid+1;
            }
            else{
                ans=mid;
                end=mid-1;
            }
        }
        return ans+k;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/kth-missing-positive-number/)