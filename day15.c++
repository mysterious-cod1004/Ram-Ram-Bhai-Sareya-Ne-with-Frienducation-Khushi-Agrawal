#include<bits/stdc++.h>
using namespace std;

//2. Combination Sum
class Solution {
public:
  void dfs(vector<int> & cand,vector<int> k,int m,int &sum,int target,vector<vector<int>> &ans){
      if(sum>target){
          return;
      }
      if(sum==target){
          ans.push_back(k);
      }
      for(int i=m;i<cand.size();i++){
        int initial=cand[i];
        sum=sum+initial;
        k.push_back(initial);
        dfs(cand,k,i,sum,target,ans);
        sum-=k[k.size()-1];
        k.pop_back();
      }
  }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
         vector<vector<int>> ans;
         vector<int> k;
         int sum=0;
         dfs(candidates,k,0,sum,target,ans);
         return ans;
    }
};
