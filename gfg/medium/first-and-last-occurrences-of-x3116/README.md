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
**Submitted:** 2026-10-07T15:29:27.286Z  

```cpp
class Solution {
  public:
    vector<int> find(vector<int>& arr, int x) {
        // code here
        int n=arr.size();
        int start=0,end=n-1;
        
        // first occurrences
        int FirstIndex=-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            
            if(arr[mid]==x){
                FirstIndex=mid;
                end=mid-1;
            }
            else if(arr[mid]<x){
                start=mid+1;
            }
            else{
               end=mid-1;
            }
        }
        
        // last occurrences
         start=0,end=n-1;
        int LastIndex=-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            
            if(arr[mid]==x){
               LastIndex=mid;
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
        ans.push_back(FirstIndex);
        ans.push_back(LastIndex);
        return ans;
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/first-and-last-occurrences-of-x3116/1)