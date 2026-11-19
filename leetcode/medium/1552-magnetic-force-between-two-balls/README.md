# Magnetic Force Between Two Balls

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

In the universe Earth C-137, Rick discovered a special form of magnetic force between two balls if they are put in his new invented basket. Rick has `n` empty baskets, the `ith` basket is at `position[i]`, Morty has `m` balls and needs to distribute the balls into the baskets such that the  **minimum magnetic force**  between any two balls is  **maximum**.

Rick stated that magnetic force between two different balls at positions `x` and `y` is `|x - y|`.

Given the integer array `position` and the integer `m`. Return  *the required force*.

 

Original
C++
 **Example 1:** 

```
Input: position = [1,2,3,4,7], m = 3
Output: 3
Explanation: Distributing the 3 balls into baskets 1, 4 and 7 will make the magnetic force between ball pairs [3, 3, 6]. The minimum magnetic force is 3. We cannot achieve a larger minimum magnetic force than 3.

```

 **Example 2:** 

```
Input: position = [5,4,3,2,1,1000000000], m = 2
Output: 999999999
Explanation: We can use baskets 1 and 1000000000.

```

 

 **Constraints:** 

- n == position.length
- 2 <= n <= 105
- 1 <= position[i] <= 109
- All integers in position are distinct.
- 2 <= m <= position.length

## Solution

**Language:** C++  
**Runtime:** 43 ms (beats 91.30%)  
**Memory:** 61.6 MB (beats 78.92%)  
**Submitted:** 2026-11-19T19:55:39.375Z  

```cpp
class Solution {
public:
bool isMagnetPossible(int minDistance,vector<int>& position, int m){
    int n=position.size();
    int count=1,busketPosition=position[0];
    for(int i=1;i<n;i++){
        if(position[i]-busketPosition>=minDistance){
            count++;
            busketPosition=position[i];
        }
    }
    return count>=m;
}
    int maxDistance(vector<int>& position, int m) {
        int n=position.size();
        sort(position.begin(),position.end());
        int start=1,end=position[n-1]-position[0],ans;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(isMagnetPossible(mid,position,m)){
                ans=mid;
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return ans;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/magnetic-force-between-two-balls/)