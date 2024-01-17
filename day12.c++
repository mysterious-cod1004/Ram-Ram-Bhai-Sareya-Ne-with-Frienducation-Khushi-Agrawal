#include<bits/stdc++.h>
using namespace std;

//1.Majority eleement
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
       unordered_map<int,int> mp;
        int cnt=0;
        int ans=0;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
            if(cnt<mp[nums[i]]){
                ans=nums[i];
                cnt=mp[nums[i]];
            }
        }
        return ans;
     

    }
};

//2. Next permutation
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
             next_permutation(nums.begin(), nums.end());
    }
};