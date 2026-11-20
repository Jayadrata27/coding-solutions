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
