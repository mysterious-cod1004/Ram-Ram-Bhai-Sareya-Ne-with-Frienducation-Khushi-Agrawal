#include<bits/stdc++.h>
using namespace std;
//1. Find the First and Last Position of a given element in sorted array
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int t) {
        vector<int>v;
        v.push_back(-1);
        v.push_back(-1);

        int l=0,r=nums.size()-1,mid=0;
        while(l<=r){
             mid=(l+r)/2;
             if(nums[mid]==t){
                int rt=mid,lt=mid;
               
                while (lt >= 0 && nums[lt] == t) {
                    v[0] = lt--;
                }
                while (rt <= r && nums[rt] == t) {
                    v[1] = rt++;
                }
               return v;
             }else{
                 if(nums[mid]<t){
                     l=mid+1;
                 }else{
                    r=mid-1;
                 }
             }
        }  
        
         return v;
    }
};
//2. Longest Palindrome Subtring 
class Solution {
public:
    string longestPalindrome(string s) {
         int st=0, n=s.length(), max_len=1;
  for(int i=0 ; i<n ; i++){
            int l=i, r=i;
            while(r<n-1 && s[r]==s[r+1]){
                r++;
            }
            i=r;
            while(l>0 && r<n-1 && s[l-1]==s[r+1]){
                l--;r++;
            }
            if(max_len < r-l+1){
                st=l;
                max_len=r-l+1;
            }
        }
        return s.substr(st, max_len);
    }
};