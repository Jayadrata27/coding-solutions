# Allocate Minimum Pages

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an array  **arr[]** of integers, where each element  **arr[i]**  represents the number of pages in the i-th book. You also have an integer  **k**  representing the number of students. The task is to allocate books to each student such that:

- Each student receives atleast one book.
- Each student is assigned a contiguous sequence of books.
- No book is assigned to more than one student.
- All books must be allocated.

The objective is to minimize the maximum number of pages assigned to any student. In other words, out of all possible allocations, find the arrangement where the student who receives the most pages still has the smallest possible maximum. If it is not possible to allocate books to all students, return  **-1** ;

 **Examples:** 

```
Input: arr[] = [12, 34, 67, 90], k = 2
Output: 113
Explanation: Allocation can be done in following ways:
=> [12] and [34, 67, 90] Maximum Pages = 191
=> [12, 34] and [67, 90] Maximum Pages = 157
=> [12, 34, 67] and [90] Maximum Pages = 113.
The third combination has the minimum pages assigned to a student which is 113.
```

```
Input: arr[] = [15, 17, 20], k = 5
Output: -1
Explanation: Since there are more students than total books, it's impossible to allocate a book to each student.
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-09T04:06:13.717Z  

```cpp
#define ll long long 
class Solution {
  public:
  bool allocationBook(ll int maxPage,vector<int> &arr, int k){
      int n=arr.size();
      ll int count=1,page=arr[0];
      for(int i=1;i<n;i++){
          page+=arr[i];
          if(page>maxPage){
              count++;
              page=arr[i];
          }
      }
      return count<=k;
  };
    int findPages(vector<int> &arr, int k) {
        // code here
        int n=arr.size();
        
        if(k>n){
            return -1;
        }
        ll int start=0,end=0,ans;
        for(int i=0;i<n;i++){
            start=max(start,(ll)arr[i]);
            end+=(ll)arr[i];
        }
        while(start<=end){
            ll int mid=start+(end-start)/2;
            if(allocationBook(mid,arr,k)){
                ans=mid;
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        return ans;
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/allocate-minimum-number-of-pages0937/1)