#include<bits/stdc++.h>
using namespace std;
#define ll long long

// RECURSIVE
// int f(vector<int> &v, int T, int ind){
//     if(ind == 0){
//         if(T % v[ind] == 0)
//             return T / v[ind];  
//         else
//             return 1e9;
//     }
//     int notTake = 0 + f(v, T, ind - 1);
//     int take = INT_MAX;
//     if(v[ind] <= T) take =  1 + f(v, T - v[ind], ind);
//     return min(take, notTake);


// }
// int minimumElements(vector<int> &arr, int Target){
//     int n = arr.size();
//     if(f(arr, Target, n - 1) >= 1e9) return -1;
//     return f(arr, Target, n - 1);
// }

// MEMOISED
// int f(vector<int> &v, int T, int ind, vector<vector<int>> &dp){
//     if(ind == 0){
//         if(T % v[ind] == 0)
//             return T / v[ind];  
//         else
//             return 1e9;
//     }
//     if(dp[ind][T] != -1) return dp[ind][T];
//     int notTake = 0 + f(v, T, ind - 1, dp);
//     int take = INT_MAX;
//     if(v[ind] <= T) take =  1 + f(v, T - v[ind], ind, dp);
//     return dp[ind][T] = min(take, notTake);


// }
// int minimumElements(vector<int> &arr, int Target){
//     int n = arr.size();
//     vector<vector<int>> dp(n, vector<int> (Target + 1, -1));
//     if(f(arr, Target, n - 1, dp) >= 1e9) return -1;
//     return f(arr, Target, n - 1, dp);
// }

// TABULATION
// int minimumElements(vector<int> &arr, int Target){
//     int n = arr.size();
//     vector<vector<int>> dp(n, vector<int> (Target + 1, 0));
//     for (int i = 0; i <= Target; i++) {
//         if(i % arr[0] == 0) 
//             dp[0][i] = i / arr[0];
//         else dp[0][i] = 1e9; 
//     }
//     for (int i = 1; i < n; i++){
//         for(int j = 0; j <= Target; j++){
//             int notTake = 0 + dp[i - 1][j];
//             int take = 1e9;
//             if(arr[i] <= j) take =  1 + dp[i][j - arr[i]];
//             dp[i][j] = min(take, notTake);
//         }
//     }
    
//     if(dp[n - 1][Target] >= 1e9) return -1;
//     return dp[n - 1][Target];
// }


// TABULTION + SPACE OPTIMISED
// int minimumElements(vector<int> &arr, int Target){
//     int n = arr.size();
//     vector<int> prev(Target + 1, 0), curr(Target + 1, 0);
//     for (int i = 0; i <= Target; i++) {
//         if(i % arr[0] == 0) 
//             prev[i] = i / arr[0];
//         else prev[i] = 1e9; 
//     }
//     for (int i = 1; i < n; i++){
//         for(int j = 0; j <= Target; j++){
//             int notTake = 0 + prev[j];
//             int take = 1e9;
//             if(arr[i] <= j) take =  1 + curr[j - arr[i]];
//             curr[j] = min(take, notTake);
//         }
//         prev = curr;
//     }
    
//     if(prev[Target] >= 1e9) return -1;
//     return prev[Target];
// }

int main(){
    
    return 0;
}