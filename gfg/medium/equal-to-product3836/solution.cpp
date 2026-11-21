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
			while (start<=mid && mid<n) {
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
