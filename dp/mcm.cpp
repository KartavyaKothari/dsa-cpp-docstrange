#include<bits/stdc++.h>
using namespace std;

int mcm(vector<vector<int>> &dp, vector<int> &dim , int i, int j){
    if(i==j) return dp[i][j] = 0;
    if(dp[i][j] == -1){
        dp[i][j] = INT_MAX;

        for(int k = i ; k < j ; k++){
            dp[i][j] = min(
                dp[i][j],
                mcm(dp,dim,i,k)+mcm(dp,dim,k+1,j)+dim[i-1]*dim[k]*dim[j]
            );
        }
    }

    return dp[i][j];
}

int main(){
    vector<int> dim;
    vector<vector<int>> dp; // def val -1
    cout<<mcm(dp,dim,1,4);

    return 0;
}