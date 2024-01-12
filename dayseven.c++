#include<bits/stdc++.h>
using namespace std;

//1.Valid Palindrome
class Solution {
public:
    bool isPalindrome(string s) {
          string p,t;
         transform(s.begin(), s.end(), s.begin(), ::tolower);
        for(int i=0;i<s.size();i++){
            if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')||(s[i]>='0'&&s[i]<='9')){
                p.push_back(s[i]);
            }
        }
        t=p;
        reverse(t.begin(),t.end());
        if(t==p){
            return true;
        }
        return false;
    }
};
//2. Valid Anagram
class Solution {
public:
    bool isAnagram(string s, string t) {
          unordered_map<char,int>mp1,mp2;
        for(int i=0;i<s.size();i++){
            mp1[s[i]]++;
        }
         for(int i=0;i<t.size();i++){
            mp2[t[i]]++;
        }
        return mp1==mp2;
    
    }
};