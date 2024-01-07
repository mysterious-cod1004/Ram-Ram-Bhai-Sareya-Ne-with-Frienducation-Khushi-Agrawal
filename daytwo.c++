#include<bits/stdc++.h>
using namespace std;

//1. MISSING NUMBER
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int k=0;
        int flag=1;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
          if(nums[i]==i){
              continue;
          }
          else{
              flag=0;
              k=i;
              break;
          }
        }
         if(flag==0){
             return k;
         }
         else{
             return nums.size();
         }
        
    }
};

//2.BEST TIME TO BUY AND SELL STOCK
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
     int maxx=0;
     int profit=0;
     int minn=INT_MAX;
     for(int i=0;i<n;i++){
         minn=min(prices[i],minn);
         profit=prices[i]-minn;
         maxx=max(maxx,profit);
     }
     return maxx;
    }
};