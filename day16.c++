#include<bits/stdc++.h>
using namespace std;

//1.subsets
class Solution {
public:
  vector<vector<int>>  findpowerset(vector<vector<int>> &vv,vector<int>& nums,int n){ 
         for(int i=0;i<(1<<n);i++){
         vector<int> v;
         for(int j=0;j<n;j++){
            if(i&(1<<j)){
                v.push_back(nums[j]);
            }
         }
         vv.push_back(v);
    }
    return vv;
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> vv;
        int n=nums.size();
        
       return  findpowerset(vv,nums,n);

    }
};

//2. Single Number
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> mp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        int k=0;
        for(auto i:mp){
            if(i.second==1){
                k=i.first;
                break;
            }
        }
        return k;
    }
};