# square-root

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

_Description not available._

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-11T17:53:43.955Z  

```cpp
class Solution {
  public:
    int floorSqrt(int n) {
        // code here
        if(n<=1){
            return n;
        }
        int start=0,end=n,ans;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(mid*mid==n){
                return mid;
            }
            else if(mid*mid<n){
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

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/square-root/1)