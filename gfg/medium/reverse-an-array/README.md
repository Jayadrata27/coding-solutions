# reverse-an-array

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

_Description not available._

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-11T17:56:34.997Z  

```cpp
class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        // code here
        int n=arr.size();
        for(int i=0;i<n/2;i++){
            int temp=arr[i];
            arr[i]=arr[n-1-i];
            arr[n-1-i]=temp;
        }
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/reverse-an-array/1)