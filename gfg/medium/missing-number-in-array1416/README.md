# missing-number-in-array1416

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

_Description not available._

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-09T14:41:54.093Z  

```cpp
class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here
        int n=arr.size();
        
        int x=0;
        for(int i=0;i<n;i++){
            x=arr[i]^x;
        }
        int y=0;
        for(int j=1;j<=n+1;j++){
            y=y^j;
        }
        return x^y;
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/missing-number-in-array1416/1)