# First and Last in Sorted

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given a sorted array  **arr[]**  with possibly some duplicates, find the first and last occurrences of an element  **x**  in the given array.
 **Note:**  If the number  **x**  is not found in the array then return both the indices as -1.

 **Examples:** 

```
Input: arr[] = [1, 3, 5, 5, 5, 5, 67, 123, 125], x = 5
Output: [2, 5]
Explanation: First occurrence of 5 is at index 2 and last occurrence of 5 is at index 5

```

```
Input: arr[] = [1, 3, 5, 5, 5, 5, 7, 123, 125], x = 7
Output: [6, 6]
Explanation: First and last occurrence of 7 is at index 6

```

```
Input: arr[] = [1, 2, 3], x = 4
Output: [-1, -1]
Explanation: No occurrence of 4 in the array, so, output is [-1, -1]
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-10T18:29:41.399Z  

```cpp
class Solution {
  public:
    vector<int> find(vector<int>& arr, int x) {
        // code here
        int n=arr.size();
        int firstIndex=-1;
        
        int start=0,end=n-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            
            if(arr[mid]==x){
                firstIndex=mid;
                end=mid-1;
            }
            else if(arr[mid]<x){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        
        
        int lastIndex=-1;
        start=0,end=n-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            
            if(arr[mid]==x){
                lastIndex=mid;
                start=mid+1;
            }
            else if(arr[mid]<x){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        
        vector<int>ans;
        ans.push_back(firstIndex);
        ans.push_back(lastIndex);
        
        return ans;
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/first-and-last-occurrences-of-x3116/1)