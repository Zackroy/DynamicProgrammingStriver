#include<bits/stdc++.h>
using namespace std;
#define ll long long

// RECURSIVE
// int f(int arr[], int n, int ind, int prev_ind){
//     if(ind == n) return 0;
//     int len = 0  + f(arr, n, ind + 1, prev_ind);
//     if(prev_ind == -1 || arr[ind] > arr[prev_ind]) {
//         len = max(len, 1 + f(arr, n, ind + 1, ind));
//     }
//     return len;
// }

// int longestIncreasingSubsequence(int arr[], int n) {
//      return f(arr, n, 0, -1); 
// }

// MEMOIZED
// int f(int arr[], int n, int ind, int prev_ind, vector<vector<int>> &dp){
//     if(ind == n) return 0;
//     if(dp[ind][prev_ind + 1] != -1) return dp[ind][prev_ind + 1];
//     int len = 0  + f(arr, n, ind + 1, prev_ind, dp);
//     if(prev_ind == -1 || arr[ind] > arr[prev_ind]) {
//         len = max(len, 1 + f(arr, n, ind + 1, ind, dp));
//     }
//     return dp[ind][prev_ind  + 1] = len;
// }

// int longestIncreasingSubsequence(int arr[], int n) {
//     vector<vector<int>> dp(n, vector<int> (n + 1, -1));
//      return f(arr, n, 0, -1, dp); 
// }

// TABULATION
// int longestIncreasingSubsequence(int arr[], int n) {
//     vector<vector<int>> dp(n + 1, vector<int> (n + 1, 0));
//     for(int ind = n - 1; ind >= 0; ind--){
//         for(int prev = n - 1; prev >= -1; prev--){
//                 int len = 0  + dp[ind + 1][prev + 1];
//                 if(prev == -1 || arr[ind] > arr[prev]) {
//                 len = max(len, 1 + dp[ind + 1][ind  + 1]);
//                 }
//                 dp[ind][prev + 1] = len;
//         }
//     } 
//     return dp[0][-1 + 1]; 
// }

// TABULATION + SPACE OPTIMIZED
// int longestIncreasingSubsequence(int arr[], int n){    
     vector<int> dp(n, 1);
     int maxi = 1;
     for(int i = 0; i < n; i++){
        for(int prev = 0; prev < i; prev++){
            if(arr[prev] < arr[i] && 1 + dp[prev] > dp[i]){
                dp[i] = 1 + dp[prev];
            }
        }
        if(dp[i] > maxi){
            maxi = dp[i];
        }
     } 
     return maxi;  
// }


int main(){
    
    return 0;
}