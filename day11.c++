#include<bits/stdc++.h>
using namespace std;

//1. Painters Partition
int count(vector<int> &boards,int time){
     int n = boards.size();
    int painters = 1;
     long long bp = 0;
    for (int i = 0; i < n; i++) {
        if (bp + boards[i] <= time) {
            bp += boards[i];
        }
        else {
            painters++;
            bp = boards[i];
        }
    }
    return painters;
}
int findLargestMinDistance(vector<int> &boards, int k)
{
  
    int low = *max_element(boards.begin(), boards.end());
    int high = accumulate(boards.begin(), boards.end(), 0);

    for (int time = low; time <= high; time++) {
        if (count(boards, time) <= k) {
            return time;
        }
    }
    return low;
}

//2. First Missing Positive
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int k=1;
        for(int i=0;i<n;i++){
          if(nums[i]<k){
            continue;
          }
          else if(nums[i]==k){
              k+=1;
          }
          else if(nums[i]>k){
              return k;
          }
        }
      return k;
    }
};