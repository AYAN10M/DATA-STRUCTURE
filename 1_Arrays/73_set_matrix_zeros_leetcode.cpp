#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void setZeroes(vector<vector<int>> &matrix)
    {
        int m = matrix.size();
        int n = matrix[0].size();

        // Step 1: create arrays to mark which rows and columns need zero
        int rowZero[m] = {0};
        int colZero[n] = {0};

        // Step 2: mark rows and columns that have a zero
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (matrix[i][j] == 0)
                {
                    rowZero[i] = 1;
                    colZero[j] = 1;
                }
            }
        }

        // Step 3: set rows to zero
        for (int i = 0; i < m; i++)
        {
            if (rowZero[i] == 1)
            {
                for (int j = 0; j < n; j++)
                {
                    matrix[i][j] = 0;
                }
            }
        }

        // Step 4: set columns to zero
        for (int j = 0; j < n; j++)
        {
            if (colZero[j] == 1)
            {
                for (int i = 0; i < m; i++)
                {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};