#include<bits/stdc++.h>
using namespace std;

// 1.Binary tree preoder traversal 

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
void preorder(TreeNode* root, vector<int> &v){
 if(root==NULL){
            return ;
        }
         v.push_back(root->val);
        preorder(root->left,v);
        preorder(root->right,v);

}
    vector<int> preorderTraversal(TreeNode* root) {
       vector<int>  v;
        preorder(root,v) ;
        return v;
    }
};

//2. Binary tree level order traversal

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
     vector<vector<int>> levelorder(TreeNode* root, vector<vector<int>> & vv){
       if(root==NULL){
       return vv ;
       }
       queue<TreeNode*> q;
       q.push(root);
       while(!q.empty()){
         int s=q.size();
         vector<int> v;
         for(int i=0;i<s;i++){
           TreeNode* newnode=q.front();
           q.pop();
           if(newnode->left!=NULL){
             q.push(newnode->left);
           }
           if(newnode->right!=NULL){
             q.push(newnode->right);
           }
           v.push_back(newnode->val);
         }
         vv.push_back(v);
       }
       return vv;
     }


    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> vv;
    return    levelorder(root,vv);
    }
};