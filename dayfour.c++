#include<bits/stdc++.h>
using namespace std;

//1. MAXIMUM POINTS YOU CAN OBTAIN FROM CARDS
class Solution {
public:
    int maxScore(vector<int>& v, int k) {
    int sum=0;
for(int i=0;i<k;i++){
    sum+=v[i];
}
int maxx=sum;
int mm=k-1;
int rr=v.size()-1;
while(k--){
    sum-=v[mm];
    sum+=v[rr];
    maxx=max(maxx,sum);
    --mm;
    --rr;
}
return maxx;}
};

//2. MAXIMUM SUBARRAY
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        int k=0;
        int maxx=INT_MIN;
      
      for(int i=0;i<n;i++){
          sum=sum+nums[i];
       maxx=max(maxx,sum);
         if(sum<0){
              sum=0;
          }
      }
      return maxx;
    }
};