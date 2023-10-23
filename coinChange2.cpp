#include<bits/stdc++.h>
using namespace std;
#define ll long long

// RECURSIVE
// long f(int *arr, int ind, int T){
//     if(ind == 0){
//         return ((T % arr[0]) == 0);
//     }
//     long notTake = f(arr, ind - 1, T);
//     long take = 0;
//     if(arr[ind] <= T) take = f(arr, ind, T - arr[ind]);
//     return take + notTake;
    
// }

// long countWaysToMakeChange(int *denominations, int n, int value)
// {
//     return f(denominations, n - 1, value);    
// }

// MEMOIZED
// long f(int *arr, int ind, int T, vector<vector<long>> &dp){
//     if(ind == 0){
//         return ((T % arr[0]) == 0);
//     }
//     if(dp[ind][T] != -1) return dp[ind][T];
//     long notTake = f(arr, ind - 1, T, dp);
//     long take = 0;
//     if(arr[ind] <= T) take = f(arr, ind, T - arr[ind], dp);
//     return dp[ind][T] = take + notTake;
    
// }

// long countWaysToMakeChange(int *denominations, int n, int value)
// {
//     vector<vector<long>> dp(n, vector<long> (value + 1, -1));
//     return f(denominations, n - 1, value, dp);    
// }

// TABULATION
// long countWaysToMakeChange(int *denominations, int n, int value)
// {
//     vector<vector<long>> dp(n, vector<long> (value + 1, 0));
//     for(int i = 0; i <= value; i++){
//         dp[0][i] = (value % denominations[0] == 0);
//     }
//     for(int i = 1; i < n; i++){
//         for(int j = 0; j <= value; j++){
//            long notTake = dp[i - 1][j];
//             long take = 0;
//             if(denominations[i] <= j) take = dp[i][j - denominations[i]];
//             dp[i][j] = take + notTake; 
//         }
//     }    
//     return dp[n - 1][value];
// }


// TABULATION + SPACE OPTIMIZED
// long countWaysToMakeChange(int *denominations, int n, int value)
// {
//     vector<long> prev(value + 1, 0), curr(value + 1, 0);
//     for(int i = 0; i <= value; i++){
//         prev[i] = (value % denominations[0] == 0);
//     }
//     for(int i = 1; i < n; i++){
//         for(int j = 0; j <= value; j++){
//            long notTake = prev[j];
//             long take = 0;
//             if(denominations[i] <= j) take = curr[j - denominations[i]];
//             curr[j] = take + notTake; 
//         }
//         prev = curr;
//     }    
//     return prev[value];
// }

int main(){
    
    return 0;
}