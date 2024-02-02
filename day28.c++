#include<bits/stdc++.h>
using namespace std;

//1. Validate Binary Search Trees
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
vector<int> v;
 void inordertraversal(TreeNode* root){
  if(root){
    inordertraversal(root->left);
    v.push_back(root->val);
    inordertraversal(root->right);
  }
}
    bool isValidBST(TreeNode* root) {
       inordertraversal(root);
       for(int i=1;i<v.size();i++){
         if(v[i-1]>=v[i]){
           return false;
         }
       }
       return true;
    }
};




//2. Fibonacci Numbers
class Solution {
public:
    int fib(int n) {
        if(n==0){
            return 0;
        }
        if(n==1 ||n==2){
            return 1;
        }
        return fib(n-1)+fib(n-2);
        
    }
}; 