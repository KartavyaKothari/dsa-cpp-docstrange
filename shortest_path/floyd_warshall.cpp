#include<bits/stdc++.h>
using namespace std;

// dist(i,j) = min{
//     dist(i,k) + dist (k,j)
//     where k ranges from 1 to n
// }

// nodes  = 1,2,3,4

// dist(1,4) = min{
//     0+dist(1,4),
//     dist(1,2)+dist(2,4),
//     dist(1,3)+dist(3,4),
//     dist(1,4)+0
// }

void floyd_warshall(vector<vector<int>> adj_mat){
    int n = adj_mat.size();
    
    for(int k = 0 ; k < n ; k++){
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < n ; j++){
                if(adj_mat[i][j] > adj_mat[i][k]+adj_mat[k][j]){
                    adj_mat[i][j] = adj_mat[i][k]+adj_mat[k][j];
                }
            }
        }
    }
}

// 1,2,3,4:    12 13 14
//          21    23 24
//          31 32    34
//          41 42 43   

//    1 2 3 4
==================
// 1  0 3 # 5     
// 2  2 0 # 4   
// 3  3 1 0 # 
// 4  # # 2 0  


int main(){
    vector<vector<int>> edges {
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
    
    vector<vector<int>> adj_mat(9,vector<int>(9,999999));
    // unordered_map<int,unordered_map<int,int>>
    
    for(auto edge: edges){
        adj_mat[edge[0]][edge[1]] = edge[2];
    }
    
    for(int i = 0 ; i < 9 ; i++){
        adj_mat[i][i] = 0;
    }
    
    return 0;
}