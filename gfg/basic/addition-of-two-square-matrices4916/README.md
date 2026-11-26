# Add of 2 Square Matrices

![Difficulty](https://img.shields.io/badge/Difficulty-Basic-red)

## Problem

Given two square matrices  **a[][]**  and  **b[][]**. Compute the sum of these two matrices and store the result in the matrix a[][] itself.

 **Examples:** 

```
Input: a[][] = [[1, 2], [3, 4]], b[][] = [[4, 3], [2, 1]]
Output: [[5, 5], [5, 5]]
Explanation: The will be: [[5, 5], [5, 5]] on adding the corresponding elements of both matrices.

```

```
Input: a[][] = [[7, 8], [9, 10]], b[][] = [[1, 2], [3, 4]]
Output: [[8, 10], [12, 14]]
Explanation: The result will be [[8, 10], [12, 14]] after adding the corresponding elements of both matrices. 
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-26T09:57:32.508Z  

```cpp
class Solution {
  public:
    void addMat(vector<vector<int>>& a, vector<vector<int>>& b) {
        // Code here
        int rowSize=a.size(),colSize=a[0].size();
        for(int i=0;i<rowSize;i++){
            for(int j=0;j<colSize;j++){
                a[i][j]=a[i][j]+b[i][j];
            }
        }
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/addition-of-two-square-matrices4916/1)