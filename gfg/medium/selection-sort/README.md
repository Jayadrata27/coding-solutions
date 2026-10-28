# selection-sort

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

_Description not available._

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-28T05:15:43.510Z  

```cpp
class Solution {
  public:
    void selectionSort(vector<int> &arr) {
        // code here
        int n=arr.size();
        
        for(int i=0;i<n;i++){
            int index=i;
            for(int j=i+1;j<n;j++){
                if(arr[index]>arr[j]){
                    index=j;
                }
            }
            swap(arr[index],arr[i]);
        }
    }
};

```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/selection-sort/1)