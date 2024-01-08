#include<bits/stdc++.h>
using namespace std;

//1.SPIRAL MATRIX
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int left = 0, right = matrix[0].size() - 1,
         top = 0, bottom = matrix.size() - 1;

        while(left <= right && top <= bottom) {
            for(int j = left; j <= right; j++) {
                ans.push_back(matrix[top][j]);
            }
            top++;

           
            for(int j = top; j <= bottom; j++) {
                ans.push_back(matrix[j][right]);
            }
            right--;

           
            if(top <= bottom) {
                for(int j = right; j >= left; j--) {
                    ans.push_back(matrix[bottom][j]);
                }
                bottom--;
            }

            
            if(left <= right) {
                for(int j = bottom; j >=top; j--) {
                    ans.push_back(matrix[j][left]);
                }
                left++;
            }
        }

        return ans;

    }
};

// 2.SUBARRAY SUM EQUALS K
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int sum=0;
        int cnt=0;
        mp[0]=1;
        for(int i=0;i<nums.size();i++){
        sum=sum+nums[i];
        int d=sum-k;
        if(mp.find(d)!=mp.end()){
            cnt+=mp[d];
        }
        mp[sum]++;
        }
        return cnt;
    }
};