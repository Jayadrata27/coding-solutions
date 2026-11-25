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
**Runtime:** 1 ms (beats 34.12%)  
**Memory:** 25.8 MB (beats 98.12%)  
**Submitted:** 2026-11-25T12:53:37.434Z  

```cpp
class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int left=0,right=n-1;
        int leftMax=0,rightMax=0;
        int totalWater=0;
        while(left<right){
            if(height[left]<height[right]){
                if(leftMax>height[left]){
                    totalWater+=leftMax-height[left];
                }
                else{
                   leftMax=height[left];
                }
                left++;
            }
            else{
                if(rightMax>height[right]){
                    totalWater+=rightMax-height[right];
                }
                else{
                    rightMax=height[right];
                }
                right--;
            }
        }
        return totalWater;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/trapping-rain-water/)