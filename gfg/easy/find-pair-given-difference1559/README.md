# Pair With Difference

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given an array,  **arr[]**  and an integer  **x**, return true if there exists a pair of elements in the array whose absolute difference is  **x**, otherwise, return false.

 **Examples:** 

```
Input: arr[] = [5, 20, 3, 2, 5, 80], x = 78
Output: true
Explanation: Pair (2, 80) have an absolute difference of 78.
```

```
Input: arr[] = [90, 70, 20, 80, 50], x = 45
Output: false
Explanation: There is no pair with absolute difference of 45.
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-20T15:22:40.200Z  

```cpp
class Solution {
  public:
    bool findPair(vector<int> &arr, int x) {
        // code here
        int n=arr.size();
        sort(arr.begin(),arr.end());
        
        int start=0,end=1;
        while(start<n && end<n){
            
            if (start == end) {
                end++;
            }
            if(arr[end]-arr[start]==x){
                return true;
            }
            else if(arr[end]-arr[start]<x){
                end++;
            }
            else{
              start++;  
            }
        }
        return false;
    }
    
};

```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/find-pair-given-difference1559/1)