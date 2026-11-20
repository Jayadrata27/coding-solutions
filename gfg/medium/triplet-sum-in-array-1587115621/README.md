# Triplet Sum in Array

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an array  **arr[]**  and an integer  **target**, determine if there exists a triplet in the array whose sum equals the given  **target**.

Return  **true**  if such a triplet exists, otherwise, return  **false**.

**Examples: 
**

```
Input: arr[] = [1, 4, 45, 6, 10, 8], target = 13
Output: true 
Explanation: The triplet {1, 4, 8} sums up to 13.
```

```
Input: arr[] = [1, 2, 4, 3, 6, 7], target = 10
Output: true 
Explanation: The triplets {1, 3, 6} and {1, 2, 7} both sum to 10. 
```

```
Input: arr[] = [40, 20, 10, 3, 6, 7], target = 24
Output: false 
Explanation: No triplet in the array sums to 24.
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-20T09:26:15.883Z  

```cpp
class Solution {
  public:
    bool hasTripletSum(vector<int> &arr, int target) {
        // Code Here
        int n=arr.size();
        sort(arr.begin(),arr.end());
        
        for(int i=0;i<n-2;i++){
            int start=i+1,end=n-1,newTarget=target-arr[i];
            
            while(start<end){
                if(arr[start]+arr[end]==newTarget){
                    return true;
                }
                else if(arr[start]+arr[end]<newTarget){
                    start++;
                }
                else{
                    end--;
                }
            }
        }
        return false;
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/triplet-sum-in-array-1587115621/1)