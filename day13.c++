#include<bits/stdc++.h>
using namespace std;

//1 Middle Of LL
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
    ListNode* middleNode(ListNode* head) {
       ListNode* temp=head;
       int cnt=0;
       while(temp!=NULL){
           cnt++;
           temp=temp->next;
       }
       int mid=cnt/2;
       if(mid%2==0){
           cnt++;
       }
       ListNode* k=head;
       while(mid--){
       k=k->next;
       }
       return k;
    }
};

//2. Trapping Rain Water
class Solution {
public:
    int trap(vector<int>& height) {
         int n=height.size()-1;
         int prev=height[0];
         int prev_index=0;
         int water=0;
         int temp=0;
         for(int i=1;i<=n;i++){
              if (height[i] >=prev) { 
            prev =height[i]; 
            prev_index =i; 
            temp =0; 
        } 
        else { 
            water +=prev - height[i]; 
            temp +=prev - height[i]; 
        } 
         }
            if (prev_index < n) {  
        water -=temp; 
        prev =height[n]; 
        for (int i =n; i >=prev_index; i--) { 
  
            if (height[i] >=prev) { 
                prev =height[i]; 
            } 
            else { 
                water +=prev - height[i]; 
            } 
        } 
    } return water;
    }
};