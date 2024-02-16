#include<bits/stdc++.h>
using namespace std;

//1.Find the Number of provinces
  
  void dfs(int node,int visited[],vector<int> adj[]){
      visited[node]=1;
      for(auto it:adj[node]){
          if(visited[it]!=1){
              dfs(it,visited,adj);
          }
      }
  }



int findNumOfProvinces(vector<vector<int>>& roads, int n) {
  vector<int> adj[n];
  for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
          if(roads[i][j]==1 && i!=j){
              adj[i].push_back(j);
              adj[j].push_back(i);
          }
      }
  }
  int count=0;
  int visited[n]={0};
  for(int i=0;i<n;i++){
      if(visited[i]!=1){
          count++;
          dfs(i,visited,adj);
      }
  }
  return count;

}