#include<bits/stdc++.h>
using namespace std;
//1.Product Of Array Except Self (17ms and 24MB)
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int  n=nums.size();
        vector<int> v(n);
        int prod=1;
        int cnt=0;
        int kk=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                cnt++;
                nums[i]=1;
               kk=i;
            }
            prod*=nums[i];
           
        }
        for(int i=0;i<n;i++){
            if(cnt==0){
          v[i]=prod/nums[i];
            }
            else if(cnt==1 ){
                if(i==kk)
                v[i]=prod;
                else{
                    v[i]=0;
                }}
            else if(cnt>1){
               v[i]=0;
            }
            }
        return v;
    }
};
//2. Merge Sorted Array (0ms and 9.5MB)
class Solution {
public:
    vector<int> merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
     int i=m-1,j=n-1,index=m+n-1;   
        while(i>=0 && j>=0)    
           {
               if(nums1[i]>=nums2[j]) 
               {
                   nums1[index--]=nums1[i--];}
            else
               { 
                   nums1[index--]=nums2[j--];}
           }
        while(j>=0)     
           {
               nums1[index--]=nums2[j--];}
               return nums1;
    }
};