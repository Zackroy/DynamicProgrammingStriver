#include<bits/stdc++.h>
using namespace std;
#define ll long long

// RECURSIVE
// bool fib(int ind, int k, vector<int> &arr){
// 	if(target == 0) return true;
// 	if(ind == 0) return (arr[0] == target);

// 	bool notTake = fib(ind - 1, k, arr);
// 	bool take = false;
// 	if(target >= arr[ind]) take = fib(ind - 1, target - arr[ind], arr);
// 	return take | notTake;
// }

// bool subsetSumToK(int n, int k, vector<int> &arr) {
// 	return fib(n - 1, k, arr);
// }

//MEMOISED
// bool fib(int ind, int target, vector<int> &arr, vector<vector<int>> &dp){
// 	if(target == 0) return true;
// 	if(ind == 0) return (arr[0] == target);
//     if(dp[ind][target] != -1) return dp[ind][target];

// 	bool notTake = fib(ind - 1, target, arr, dp);
// 	bool take = false;
// 	if(target >= arr[ind]) take = fib(ind - 1, target - arr[ind], arr, dp);
// 	return dp[ind][target] = take | notTake;
// }

// bool subsetSumToK(int n, int k, vector<int> &arr) {
//     vector<vector<int>> dp(n, vector<int>(k + 1, -1));
// 	return fib(n - 1, k, arr, dp);
// }

//TABULATION
// bool subsetSumToK(int n, int k, vector<int> &arr) {
//     vector<vector<bool>> dp(n, vector<bool>(k + 1, 0));
// 	for(int i = 0; i < n; i++) dp[i][0] = true;
//     dp[0][arr[0]] = true;
//     for(int ind = 1; ind < n; ind++){
//         for(int target = 1; target <= k; target++){
//             bool notTake = dp[ind - 1][target];
// 	        bool take = false;
// 	        if(target >= arr[ind]) take = dp[ind - 1][target - arr[ind]];
// 	        dp[ind][target] = take | notTake;
//         }
//     }
//     return dp[n - 1][k];
// }

//TABULATION + SPACE OPTIMISED
// bool subsetSumToK(int n, int k, vector<int> &arr) {
//     vector<bool> front(k + 1, 0), curr(k + 1, 0);
//  	front[0] = curr[0] = true;
//     if(arr[0] <= k) front[arr[0]] = true;
//     for(int ind = 1; ind < n; ind++){
//         for(int target = 1; target <= k; target++){
//             bool notTake = front[target];
// 	        bool take = false;
// 	        if(target >= arr[ind]) take = front[target - arr[ind]];
// 	        curr[target] = take | notTake;
//         }
//         front = curr;
//     }
//     return front[k];
// }
int main(){
    
    return 0;
}