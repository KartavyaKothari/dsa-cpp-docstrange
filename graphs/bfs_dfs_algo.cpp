#include<bits/stdc++.h>
using namespace std;

void dfs(int node, unordered_map<int,bool> &visited,unordered_map<int,vector<int>> &adj){
    cout<<node<<" ";
    visited[node] = true;

    for(int child: adj[node]){
        if(!visited[child]){
            dfs(child,visited,adj);
        }
    }
}

void bfs(unordered_map<int,vector<int>> &adj){
    queue<int> nodes;
    unordered_map<int,bool> visited;
    nodes.push(1);

    while(!nodes.empty()){
        int curr = nodes.front();
        visited[child] = true;
        nodes.pop();
        cout<<curr<<" ";

        for(int child: adj[curr]){
            if(!visited[child]){
                nodes.push(child);
//                 visited[child] = true;
            }
        }
    }
}

int main(){
    vector<vector<int>> edges = {{1,2},{2,3},{2,4},{3,5},{4,5}};
    unordered_map<int,vector<int>> adj;
    unordered_map<int,bool> visited;

    for(vector<int> edge: edges){
        adj[edge[0]].push_back(edge[1]);
        adj[edge[1]].push_back(edge[0]);
    }

    // dfs(1,visited,adj);
    bfs(adj);   

    return 0;
}
