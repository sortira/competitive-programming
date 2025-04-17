#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>> mat) {
        int m = mat.size(), n = mat[0].size();

        // Step 1: Process diagonals starting from each row in first column
		//as per code definition it says first column and top row all diagonals begin that's why
		//first let's do it for the first column;
        for (int row = 0; row < m; ++row) {
            vector<int> diag;
            int x = row, y = 0;
            while (x < m && y < n)
                diag.push_back(mat[x++][y++]);

            sort(diag.begin(), diag.end());

            x = row, y = 0;
            int idx = 0;
            while (x < m && y < n)
                mat[x++][y++] = diag[idx++];
        }

        // Step 2: Process diagonals starting from each column in top row (except 0, already done)
        for (int col = 1; col < n; ++col) {
            vector<int> diag;
            int x = 0, y = col;
            while (x < m && y < n)
                diag.push_back(mat[x++][y++]);

            sort(diag.begin(), diag.end());

            x = 0, y = col;
            int idx = 0;
            while (x < m && y < n)
                mat[x++][y++] = diag[idx++];
        }

        return mat;
    }
};
	    	                        	                                                                                                                                            	                                                                                                                                        
