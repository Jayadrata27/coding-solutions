# search-an-element-in-an-array-1587115621

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

_Description not available._

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-27T04:44:47.051Z  

```cpp
class Solution {
  public:
    int search(vector<int>& arr, int x) {
        // code here
        int n=arr.size();
        
        for(int i=0;i<n;i++){
          if(arr[i]==x){
            return i;
          }
        }
        return -1;
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/search-an-element-in-an-array-1587115621/1)