#include<bits/stdc++.h>
using namespace std;


//1. Number of provinces
class Solution {
public:
    void dfs(int node,vector<int>&vis,vector<int>adj[]){
        vis[node]=1;

        for(auto i:adj[node]){
            if(vis[i]==0){
                dfs(i,vis,adj);
            }
        }
    }

    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        vector<int>adj[n];

        for(int i=0;i<n;i++){
           for(int j=0;j<n;j++){
               if(isConnected[i][j]==1 && i!=j){
                   adj[i].push_back(j);
                   adj[j].push_back(i);
               }
           }
        }

        vector<int>vis(n,0);
        int ans=0;

        for(int i=0;i<n;i++){
            if(vis[i]==0){
                ans++;
                dfs(i,vis,adj);
            }
        }
        return ans;
    }
};