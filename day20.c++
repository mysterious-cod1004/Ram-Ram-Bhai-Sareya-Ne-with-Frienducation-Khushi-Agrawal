#include<bits/stdc++.h>
using namespace std;

//1.Min Stack
class MinStack {
public:
vector<pair<int,int>> v;
    MinStack() {

    }
    void push(int val) {
    if(v.empty()){
        v.push_back({val,val});
    }
    else{
        v.push_back({val,min(val,v.back().second)});
    }
    }
    void pop() {
        v.pop_back();
    }
    int top() {
        return v.back().first;
    }
    int getMin() {
        return v.back().second;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */

//2. Largest rectangle on histogram 
class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
   int n=heights.size();
   vector<int> v1;
   vector<int> v2;
   stack<int> s;
   stack<int> ss;
     for(int i=0;i<n;i++){
       while(s.size() && heights[s.top()]>=heights[i]){
           s.pop();
       }
       if(s.size()){
           v1.push_back(s.top());
       }
       else
       v1.push_back(-1);
       s.push(i);
     }
     for(int i=n-1;i>=0;i--){
    while(ss.size() && heights[ss.top()]>=heights[i])
    {
        ss.pop();
    }
    if(ss.size())
    v2.push_back(ss.top());
    else
     v2.push_back(n);
    ss.push(i);
     }
    reverse(v2.begin(),v2.end());
    int ans=0;
    int x;
    for(int i=0;i<n;i++){
        x=(v2[i]-v1[i]-1)*heights[i];
        ans=max(ans,x);
    }
    return ans;
    }

};