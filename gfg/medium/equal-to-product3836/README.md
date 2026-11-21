# Product Pair

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an integer array  **arr[]**  and an integer  **target**, determine whether there exists a pair of elements in the array whose  **product**  is equal to target.

Return  **true**  if such a pair exists; otherwise, return  **false**.

 **Examples:** 

```
Input: arr[] = [10, 20, 9, 40], target = 400
Output: true
Explanation: As 10 * 40 = 400, the answer is true.

```

```
Input: arr[] = [-10, 20, 9, -40], target = 30
Output: false
Explanation: No pair exists with product 30.
```

```
Input: arr[] = [-10, 0, 9, -40], target = 0
Output: true
Explanation: As -10 * 0 = 0, the answer is true.
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-21T11:50:28.975Z  

```cpp
#define ll long long 
class Solution {
	public:
	bool isProduct(vector<int>& arr, long long target) {
		// code here
	    int n = arr.size();
		sort(arr.begin(), arr.end());
		// figureout the mid = last index of -ve number
	    int mid = -1;
		for (int i = 0; i<n; i++) {
			if (arr[i]<0) {
				mid = i;
			}
		}
		// if target is +ve
		ll int start,end;
		if (target >= 0) {
			// if all the element are -ve
			start = 0, end = mid;
			while (start<end) {
			    long long int prod=(ll)arr[start]*arr[end];
				if (prod == target) {
					return true;
				}
				else if (prod<target) {
					end--;
				}
				else {
					start++;
				}
			}
			
			// if all the element are +ve
			start = mid + 1, end = n - 1;
			while (start<end) {
			    long long int prod=(ll)arr[start]*arr[end];
				if (prod == target) {
					return true;
				}
				else if (prod<target) {
					start++;
				}
				else {
					end--;
				}
			}
		}
		// if target is -ve
		else {
			start = 0, end = mid + 1;
			while (start<=mid && end<n) {
			    long long prod =(ll)arr[start]+arr[end];
				if (prod == target) {
					return true;
				}
				else if (arr[start]+arr[end]>target) {
					end++;
				}
				else {
					start++;
				}
			}
		}
		return false;
	}
};

```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/equal-to-product3836/1)