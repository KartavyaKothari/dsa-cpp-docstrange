#include<bits/stdc++.h>
using namespace std;

int prims(unordered_map<int,vector<vector<int>>> &adj){
    int src = 0;
    int min_w = 0;

    priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> pq;
    unordered_map<int,bool> visited;

    pq.push({0,src});

    while(!pq.empty()){
        auto curr = pq.top();
        pq.pop();

        if(visited[curr[1]]) continue;
        visited[curr[1]] = true;
        
        min_w+=curr[0];

        for(vector<int> child: adj[curr[1]]){
            pq.push({child[1],child[0]});
        }
    }

    return min_w;
}

int main(){
    vector<vector<int>> edges = {};

    unordered_map<int,vector<vector<int>>> adj;

    for(){

    }

    return 0;
}