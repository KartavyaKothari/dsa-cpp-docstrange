#include<bits/stdc++.h>
using namespace std;

int knapsack(int W, vector<int> weight, vector<int> profit, int n){
    int i,w;

    vector<vector<int>> dp(
        n+1,
        vector<int>(
            W+1,
            0
        )
    );

    for(i = 0 ; i <= n ; i++){
        for(w = 0 ; w <= W ; w++){
            if(i == 0 || w == 0){
                dp[i][w] = 0;
                continue;
            }
            if(weight[i-1] <= w){
                dp[i][w] = max(profit[i-1]+dp[i-1][w-weight[i-1]],dp[i-1][w]);
            }else{
                dp[i][w] = dp[i-1][w];
            }
        }
    }

    return dp.back().back();
}

int main(){


    return 0;
}