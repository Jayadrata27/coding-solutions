# Trapping Rain Water

![Difficulty](https://img.shields.io/badge/Difficulty-Hard-red)

## Problem

Given `n` non-negative integers representing an elevation map where the width of each bar is `1`, compute how much water it can trap after raining.

 

Original
C++
 **Example 1:** 

```
Input: height = [0,1,0,2,1,0,1,3,2,1,2,1]
Output: 6
Explanation: The above elevation map (black section) is represented by array [0,1,0,2,1,0,1,3,2,1,2,1]. In this case, 6 units of rain water (blue section) are being trapped.

```

 **Example 2:** 

```
Input: height = [4,2,0,3,2,5]
Output: 9

```

 

 **Constraints:** 

- n == height.length
- 1 <= n <= 2 * 104
- 0 <= height[i] <= 105

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 26.8 MB (beats 34.46%)  
**Submitted:** 2026-11-25T05:54:52.639Z  

```cpp
class Solution {
public:
    int trap(vector<int>& height) {
       int n=height.size();
       vector<int>rightMax(n,0);
       int leftMax=height[0];
        // SuffixMax cal
        rightMax[n-1]=height[n-1];
        for(int i=n-2;i>=0;i--){
            rightMax[i]=max(rightMax[i+1],height[i]);
        }
        // Water Cal
        int totalWaterCal=0;
        for(int i=1;i<n-1;i++){
            int minLeftRight=min(leftMax,rightMax[i+1]);
            if(minLeftRight>height[i]){
                totalWaterCal+=minLeftRight-height[i];
            }
            leftMax=max(leftMax,height[i]);
        }
        return totalWaterCal;

    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/trapping-rain-water/)