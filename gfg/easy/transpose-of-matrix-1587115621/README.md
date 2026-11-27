# Transpose of Matrix

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given a square matrix of size  **n x n**, return the transpose matrix of the given matrix.

The transpose of a matrix is obtained by converting all the rows to columns and all the columns to rows.

 **Examples:** 

```
Input : mat[][] = [[1, 2, 3], [4, 5, 6], [7, 8, 9]]
Output : [[1, 4, 7], [2, 5, 8], [3, 6, 9]]
Explanation: The first row [1, 2, 3] becomes the first column, the second row [4, 5, 6] becomes the second column, and the third row [7, 8, 9] becomes the third column.

```

```
Input : mat[][] =  [[1, 2], [1, 2]]
Output : [[1, 1], [2, 2]]
Explanation: The first column contains the first elements of both rows, [1, 1], and the second column contains the second elements, [2, 2].

```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-27T05:58:47.322Z  

```cpp
class Solution {
  public:
    vector<vector<int>> transpose(vector<vector<int>>& mat) {
        // code here
        int row=mat.size(),col=mat[0].size();
        for(int i=0;i<row-1;i++){
            for(int j=i+1;j<col;j++){
                swap(mat[i][j],mat[j][i]);
            }
        }
        return mat;
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/transpose-of-matrix-1587115621/1)