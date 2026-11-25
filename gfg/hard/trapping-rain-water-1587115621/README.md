# Trapping Rain Water

![Difficulty](https://img.shields.io/badge/Difficulty-Hard-red)

## Problem

Given an array  **arr[]** with non-negative integers representing the height of blocks. If the width of each block is 1, compute how much water can be trapped between the blocks during the rainy season. 

 **Examples:** 

```
Input: arr[] = [3, 0, 1, 0, 4, 0, 2]
Output: 10
Explanation: Total water trapped = 0 + 3 + 2 + 3 + 0 + 2 + 0 = 10 units.

```

```
Input: arr[] = [3, 0, 2, 0, 4]
Output: 7
Explanation: Total water trapped = 0 + 3 + 1 + 3 + 0 = 7 units.

```

```
Input: arr[] = [1, 2, 3, 4]
Output: 0
Explanation: We cannot trap water as there is no height bound on both sides.
```

```
Input: arr[] = [2, 1, 5, 3, 1, 0, 4]
Output: 9
Explanation: Total water trapped = 0 + 1 + 0 + 1 + 3 + 4 + 0 = 9 units.
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-25T12:55:18.652Z  

```cpp
class Solution {
  public:
    int maxWater(vector<int> &arr) {
        // code here
        int n=arr.size();
        vector<int>leftMax(n,0);
        vector<int>rightMax(n,0);
        // Prefix Sum
        leftMax[0]=arr[0];
        for(int i=1;i<n;i++){
            leftMax[i]=max(leftMax[i-1],arr[i]);
        }
        // Suffix Sum
        rightMax[n-1]=arr[n-1];
        for(int i=n-2;i>=0;i--){
            rightMax[i]=max(rightMax[i+1],arr[i]);
        }

        int totalSum=0;
        for(int i=1;i<n-1;i++){
            int minLeftRight=min(leftMax[i-1],rightMax[i+1]);
            if(minLeftRight>arr[i]){
                totalSum+=minLeftRight-arr[i];
            }
        }
        return totalSum;

    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/trapping-rain-water-1587115621/1)