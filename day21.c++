#include<bits/stdc++.h>
using namespace std;

//1. nearest smallest element
vector<int> Solution::prevSmaller(vector<int> &A) {
    int n=A.size();
    vector<int> v(n);
    stack<int> s;
    int c=0;
    for(int i=0;i<n;i++){
           c=A[i];
           while(!s.empty() && s.top()>=c){
                s.pop();}
               v[i]=s.empty() ? -1:s.top();
               s.push(c);
    }
    return v;
}

//2. Slinding Window Maximum
 
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
       vector<int> ans;
       list<int> l;
       int i=0, j=0;
       while(j < nums.size()){
          while(l.size() >0 && l.back() < nums[j])    
          l.pop_back();
            l.push_back(nums[j]);
            if(j-i+1 < k){    
            j++;}
            else if (j-i+1 == k) {
                ans.push_back(l.front());
                if(nums[i] == l.front())   
                 l.pop_front();
                i++;
                j++;
            }
       }
    return ans;   
    }
};