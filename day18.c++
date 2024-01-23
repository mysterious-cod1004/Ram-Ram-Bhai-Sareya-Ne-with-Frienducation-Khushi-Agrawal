#include<bits/stdc++.h>
using namespace std;

//1. Add two numbers (4ms)
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode *ansnode=new ListNode(-1);
        ListNode *tempp=ansnode;
       
         int ans=0,sum=0;
        while(l1!=NULL || l2!=NULL || ans){
              sum=0;
              if(l1!=NULL){
               sum+=l1->val;
               l1=l1->next;
              }
              if(l2!=NULL){
                  sum+=l2->val;
                  l2=l2->next;
              }
              sum+=ans;
              ans=sum/10;
              ListNode *newnode=new ListNode(sum%10);
              tempp->next=newnode;
              tempp=tempp->next;

        }
        return ansnode->next;
        
    }
};

//2.Merge K sorted lists (11ms)

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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode *ansnode=new ListNode(-1);
        ListNode *k=ansnode;
        vector<int> v;
        for(int i=0;i<lists.size();i++){
            ListNode *temp=lists[i];
            while(temp!=NULL){
                v.push_back(temp->val);
                temp=temp->next;
            }
        }
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++){
            ListNode *tempp=new ListNode(v[i]);
            k->next=tempp;
            k=k->next;
        }
        return ansnode->next;
    }
};