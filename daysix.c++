#include<bits/stdc++.h>
using namespace std;

//1.Valid Suduko
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
         vector<set<int>> rows(9), cols(9), blocks(9);
        
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                
                if (board[i][j] == '.') continue;
                
                int curr = board[i][j] - '0';
                if (rows[i].count(curr) || cols[j].count(curr) || blocks[(i/3)*3+j/3].count(curr)) 
                    return false;
                
                rows[i].insert(curr);
                cols[j].insert(curr);
                blocks[(i/3)*3+j/3].insert(curr);
            }
        }
        
        return true;
    }
};

//2. K-diff pairs in an array
class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
       
        unordered_map<int,int>st;
        int count=0;
        for(auto &it:nums)
            st[it]++;
        if(k==0) 
        {
            for(auto &ko:st) if(ko.second>1) count++;
                
        }
        else
        for(auto &ki:st)
        {
            if(st.count(ki.first+k)) count++;
        }
        
        return count;
    }
};