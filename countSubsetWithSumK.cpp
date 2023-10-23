#include<bits/stdc++.h>
using namespace std;
#define ll long long

// RECURSIVE
// int fib(int ind, int target, vector<int> &arr){
// 	if(target == 0) return 1;
// 	if(ind == 0) return (arr[0] == target);s

// 	int notTake = fib(ind - 1, target, arr);
// 	int take = 0;
// 	if(target >= arr[ind]) take = fib(ind - 1, target - arr[ind], arr);
// 	return (take + notTake) % 1000000007;
// }

// int findWays(vector<int>& arr, int k)
// {
// 	int n  = arr.size();
// 	return fib(n - 1, k, arr);
// }

// MEMOIZED
// int fib(int ind, int target, vector<int> &arr, vector<vector<int>> &dp){
// 	if(target == 0) return 1;
// 	if(ind == 0) return (arr[0] == target);
// 	if(dp[ind][target] != -1) return dp[ind][target];
// 	int notTake = fib(ind - 1, target, arr, dp);
// 	int take = 0;
// 	if(target >= arr[ind]) take = fib(ind - 1, target - arr[ind], arr, dp);
// 	return dp[ind][target] = (take + notTake) % 1000000007;
// }
 
// int findWays(vector<int>& arr, int k)
// {
// 	int n  = arr.size();
// 	vector<vector<int>> dp(n, vector<int> (k + 1, -1));
// 	return fib(n - 1, k, arr, dp);
// }







int main(){
    
    return 0;
}