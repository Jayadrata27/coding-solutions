# Check for 4 Sum

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given an integer array  **arr[]**  and an integer  **x**, determine whether there exist four distinct elements in the array whose sum is equal to x.

Return true if such four elements exist. Otherwise, return false.

 **Examples:** 

```
Input: arr[] = [1, 5, 1, 0, 6, 0], x = 7
Output: true
Explanation: The four elements 1, 5, 1, 0 have a sum equal to 7.

```

```
Input: arr[] = [1, 2, 3, 4, 5], x = 50
Output: false
Explanation: No combination of four distinct elements has a sum equal to 50.
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-20T13:34:41.045Z  

```cpp
class Solution {
	public:
	bool fourSum(vector<int>& arr, int x) {
		// code here
		int n = arr.size();
		sort(arr.begin(), arr.end());
		for (int i = 0; i<n - 3; i++) {
			for (int j = i + 1; j<n - 2; j++) {
			  int start = j + 1, end = n - 1, newTarget = x - arr[i]-arr[j];
				while (start<end) {
					if (arr[start]+arr[end] == newTarget) {
						return true;
					}
					else if (arr[start]+arr[end]<newTarget) {
						start++;
					}
					else {
						end--;
					}
				}
			}
		}
		return false;
	}
};

```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/four-elements2452/1)