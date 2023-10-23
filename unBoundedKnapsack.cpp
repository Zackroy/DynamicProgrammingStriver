#include<bits/stdc++.h>
using namespace std;
#define ll long long

//RECURSIVE
// int f(int ind, int W, vector<int> &profit, vector<int> &weight){
//     if(ind == 0){
//         return (W / weight[0]) * profit[0];  
//     }
//     int notTake = 0 + f(ind - 1, W, profit, weight);
//     int take = -1e9;
//     if(weight[ind] <= W) take = profit[ind] + f(ind, W - weight[ind], profit, weight);
//     return max(take, notTake);
// }
// int unboundedKnapsack(int n, int w, vector<int> &profit, vector<int> &weight){
//     return f(n - 1, w, profit, weight);    
// }



// MEMOIZED
// int f(int ind, int W, vector<int> &profit, vector<int> &weight, vector<vector<int>> &dp){
//     if(ind == 0){
//         return (W / weight[0]) * profit[0];  
//     }
//     if(dp[ind][W] != -1) return dp[ind][W];
//     int notTake = 0 + f(ind - 1, W, profit, weight, dp);
//     int take = -1e9;
//     if(weight[ind] <= W) take = profit[ind] + f(ind, W - weight[ind], profit, weight, dp);
//     return dp[ind][W] = max(take, notTake);
// }
// int unboundedKnapsack(int n, int w, vector<int> &profit, vector<int> &weight){
//     vector<vector<int>> dp(n, vector<int> (w + 1, -1));
//     return f(n - 1, w, profit, weight, dp);    
// }

// TABULATION
// int unboundedKnapsack(int n, int w, vector<int> &profit, vector<int> &weight){
//     vector<vector<int>> dp(n, vector<int> (w + 1, 0));
//     for(int i = weight[0]; i <= w; i++){
//         dp[0][i] = (int)(i / weight[0]) * profit[0];
//     }
//     for(int i = 1; i < n; i++){
//         for(int j = 0; j <= w; j++){
//             int notTake = 0 + dp[i - 1][j];
//             int take = -1e9;
//             if(weight[i] <= j) take = profit[i] + dp[i][j - weight[i]];
//             dp[i][j] = max(take, notTake);
//         }
//     }
//     return dp[n - 1][w];
// }

// TABULATION + SPACE OPTIMIZED
// int unboundedKnapsack(int n, int w, vector<int> &profit, vector<int> &weight){
//     vector<int> prev(w + 1, 0), curr(w + 1, 0);
//     for(int i = weight[0]; i <= w; i++){
//         prev[i] = (int)(i / weight[0]) * profit[0];
//     }
//     for(int i = 1; i < n; i++){
//         for(int j = 0; j <= w; j++){
//             int notTake = 0 + prev[j];
//             int take = -1e9;
//             if(weight[i] <= j) take = profit[i] + curr[j - weight[i]];
//             curr[j] = max(take, notTake);
//         }
//         prev = curr;
//     }
//     return prev[w];
// }

// TABULATION + SUPER SPACE OPTIMIZED 
// int unboundedKnapsack(int n, int w, vector<int> &profit, vector<int> &weight){
//     vector<int> prev(w + 1, 0);
//     for(int i = weight[0]; i <= w; i++){
//         prev[i] = (int)(i / weight[0]) * profit[0];
//     }
//     for(int i = 1; i < n; i++){
//         for(int j = 0; j <= w; j++){
//             int notTake = 0 + prev[j];
//             int take = -1e9;
//             if(weight[i] <= j) take = profit[i] + prev[j - weight[i]];
//             prev[j] = max(take, notTake);
//         }
//         // prev = curr;
//     }
//     return prev[w];
// }
int main(){
    
    return 0;
}