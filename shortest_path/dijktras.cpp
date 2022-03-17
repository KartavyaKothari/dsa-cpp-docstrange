// Single source shortest path
#include<bits/stdc++.h>
using namespace std;

void dijktras(int src, unordered_map<int,vector<vector<int>>> &adj, unordered_map<int,int> &dist){
    priority_queue< vector<int> , vector<vector<int>> , greater<vector<int>>> pq;

    pq.push({0,src});

    while(!pq.empty()){
        vector<int> curr = pq.top();
        pq.pop();

        for(vector<int> child: adj[curr[1]]){
            if(dist[curr[1]]+child[1]<dist[child[0]]){
                dist[child[0]] = dist[curr[1]]+child[1];
                pq.push({dist[child[0]],child[0]});
            }
        }
    }
}

int main(){
    vector<vector<int>> edges = {
        {0,1,4},
        {0,7,8},
        {1,2,8},
        {1,7,11},
        {2,3,7},
        {2,5,4},
        {2,8,2},
        {3,4,9},
        {3,5,14},
        {4,5,10},
        {5,6,2},
        {6,7,1},
        {6,8,6},
        {7,8,7}
    };

    unordered_map<int,vector<vector<int>>> adj;
    unordered_map<int,int> dist;

    for(vector<int> edge: edges){
        dist[edge[0]] = 99999;
        dist[edge[1]] = 99999;

        adj[edge[0]].push_back({edge[1],edge[2]});
        adj[edge[1]].push_back({edge[0],edge[2]});
    }

    dist[0] = 0;

    dijktras(0,adj,dist);

    for(auto data: dist){
        cout<<data.first<<" "<<data.second<<endl;
    }

    return 0;
}