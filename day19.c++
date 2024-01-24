#include<bits/stdc++.h>
using namespace std;

//1. Reverse Linked List
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:

    ListNode* reverseList(ListNode* head) {
       ListNode *temp=head;
       ListNode* prev=NULL;
       while(temp!=NULL){
           ListNode * tempp=temp->next;
           temp->next=prev;
           prev=temp;
           temp=tempp;
       }
       return prev;
    }
};

//2. Valid Parenthesis
class Solution {
public:
    bool isValid(string s) {
        int n=s.length();
        stack<char> st;
        for(int i=0;i<n;i++){
          char c=s[i];
          if(c=='('|| c=='{' || c=='['){
            st.push(c);
          }
          else{
              if(!st.empty()){
                   char top=st.top();
                   if((c==')' && top=='(') || (c=='}' && top=='{') || (c==']'&& top=='[')){
                       st.pop();
                   }
                   else{
                       return false;
                   }
              }
              else{
                  return false;
              }
          }
        }
          if(st.empty()){
            return true;
        }
        else{
            return false;
        }
      
    }
};