#include<bits/stdc++.h>
using namespace std;

//1. Search a 2D matrix 
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& arr, int target) {
        int n=arr.size();
        int m=arr[0].size();
        int i=0;
        
        while(i<n)
        {
        if(target<=arr[i][m-1])
        {
            int j=0;
            while(j<m)
            {
                if(target==arr[i][j])
                return true;
                else if(target<arr[i][j])
                return false;
                else
                j++;
            }
            return false;
        }
        i++;
        }
               
    return false;
    }
};

//2. Search a 2D matrix II
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int col = matrix[0].size() - 1;
        int row = 0;

        while (col >= 0 && row < matrix.size()) {
            if (target == matrix[row][col]) {
                matrix.clear();
                return true;
            }
            else if (target < matrix[row][col])
                col--;
            else
                row++;
        }

        matrix.clear();
        return false;
    }
};