#include<bits/stdc++.h>
using namespace std;

void bellman(vector<vector<int>> &edges){
    unordered_map<int,int> dist;
    dist[0] = 0;

    for(int i = 0 ; i < 4 ; i++){
        for(auto edge: edges){
            if(dist.find(edge[0]) == dist.end()) dist[edge[0]]= 9999999;
            if(dist.find(edge[1]) == dist.end()) dist[edge[1]]= 9999999;

            if(dist[edge[0]]+edge[2] < dist[edge[1]]){
                dist[edge[1]] = dist[edge[0]]+edge[2];
            }
        }
    }

    for(auto edge: edges){
        if(dist[edge[0]]+edge[2] < dist[edge[1]]){
            cout<<"Negative edge weight cycle found"<<endl;
            return;
        }
    }
}

int main(){
    vector<vector<int>> edges = {
        {0,1,10},
        {1,2,30},
        {2,3,30},
        {3,1,-100}
    };

    return 0;
}