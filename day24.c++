#include<bits/stdc++.h>
using namespace std;

//1. Longest substring without repeating characters
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char> set;
        int maxx=0;
        int start=0;
        int end =0;
        while(start<s.size()){
          auto it=set.find(s[start]);
          if(it==set.end()){
            if(start-end+1>maxx){
              maxx=start-end+1;
            }
            set.insert(s[start]);
            start++;
          }
          else{
            set.erase(s[end]);
            end++;
          }
        }

      return maxx;
    }
};

//2. Minimum window substring 
class Solution {
public:
    string minWindow(string s, string t) {
        map<char, int> mp;
        for(auto i: t) mp[i]++;
        int lenT=t.size(), start=0, end=0;
        int len=INT_MAX, k=0;
        while(end<s.size()){
            if(mp[s[end++]]-->0) {
              lenT--;}
            while(lenT==0){
                if(end-start<len) {
                  k=start;
                 len=end-(k);}
                if(mp[s[start++]]++==0){
                   lenT++;}
            }  
        }
        if(len==INT_MAX){
          return "";
        }
        else{
          return s.substr(k,len);
        }
    }
};
