#include<bits/stdc++.h>
using namespace std;

class DisjointSet{
    unordered_map<int,int> parent;
    public:
    DisjointSet(vector<int> nodes){
        for(int n : nodes){
            parent[n] = n;
        }
    }

    int root(int n){
        if(parent[n]!=n){
            return root(parent[n]);
        }
        return n;

        // Path compression
        // if(parent[n]!=n){
        //     parent[n] = root(parent[n]);
        // }
        // return parent[n];
    }

    void merge(int x, int y){
        int x_r = root(x);
        int y_r = root(y);

        if(!is_same_set(x,y)){
            parent[x_r] = y_r;
        }
    }

    bool is_same_set(int x, int y){
        return root(x) == root(y);
    }
};

int main(){

    return 0;
}