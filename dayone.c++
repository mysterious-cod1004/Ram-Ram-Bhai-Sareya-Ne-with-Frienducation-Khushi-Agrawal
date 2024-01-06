#include<bits/stdc++.h>
using namespace std;

// 1. TWO SUM

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
         int n = nums.size();
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int tmp = target - nums[i];
            if (mp.count(tmp)) return {mp[tmp], i};
            mp[nums[i]] = i;
        }
        return {};

    }
};

//2. REMOVE DUPLICATES FROM SORTED ARRAY

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = size(nums);
        int pos = 0;
        int currValue = INT_MIN;
        for(int i=0;i<n;i++){
            if(currValue!=nums[i]){
                currValue= nums[i];
                nums[pos++] = currValue;
            }
            else{
                continue;
            }
        }
       return pos;
    }

};