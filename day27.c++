#include<bits/stdc++.h>
using namespace std;

//1. Ceil from BST
#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure:

    class BinaryTreeNode {
    public:
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;
        
        BinaryTreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
        
        ~BinaryTreeNode() {
            if (left) {
              delete left;
            }
            if (right) {
              delete right;
            }
        }
    };

************************************************************/
void func(BinaryTreeNode<int> *root,int &ans,int x){
  if(root==NULL){
    return;
  }
  if(root->data==x){
    ans=x;
    return;
  }
  if(root->data>x){
    ans=root->data;
    func(root->left,ans,x);
  }
  else{
    func(root->right,ans,x);
  }
}
int findCeil(BinaryTreeNode<int> *node, int x){
  
    int ans=-1;
    func(node,ans,x);
    return ans;
}

//2. Kth smallest element in a BST
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
vector<int>  preorder(TreeNode* root,vector<int> &v,int k){
if(root==NULL){
  return v;
}
v.push_back(root->val);
preorder(root->left,v,k);
preorder(root->right,v,k);
return v;
}

    int kthSmallest(TreeNode* root, int k) {
        vector<int> v;
        preorder(root,v,k);
        sort(v.begin(),v.end());
        return v[k-1];

    }
};