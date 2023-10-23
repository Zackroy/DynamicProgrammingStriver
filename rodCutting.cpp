#include<bits/stdc++.h>
using namespace std;
#define ll long long

// RECURSION
// int f(vector<int> &price, int ind, int n){
// 	if(ind == 0){
// 		return n * price[0];
// 	}
// 	int notTake = 0 + f(price, ind - 1, n);
// 	int rodLength = ind + 1;
// 	int take = -1e9;
// 	if(rodLength <= n) take = price[ind] + f(price, ind, n - rodLength);
// 	return max(notTake, take);
// }
// int cutRod(vector<int> &price, int n)
// {
// 	return f(price,n - 1, n);
// }

// MEMOIZED
// int f(vector<int> &price, int ind, int n, vector<vector<int>> &dp){
// 	if(ind == 0){
// 		return n * price[0];
// 	}
// 	if(dp[ind][n] != -1) return dp[ind][n];
// 	int notTake = 0 + f(price, ind - 1, n, dp);
// 	int rodLength = ind + 1;
// 	int take = -1e9;
// 	if(rodLength <= n) take = price[ind] + f(price, ind, n - rodLength, dp);
// 	return dp[ind][n] = max(notTake, take);
// }
// int cutRod(vector<int> &price, int n)
// {
// 	vector<vector<int>> dp(n, vector<int> (n + 1, -1));
// 	return f(price,n - 1, n, dp);
// }

// TABULATION
// int cutRod(vector<int> &price, int n)
// {
// 	vector<vector<int>> dp(n, vector<int> (n + 1, 0));
// 	for(int i = 0; i <= n; i++){
// 		dp[0][i] = i * price[0];
// 	}
// 	for(int i = 1; i < n; i++){
// 		for(int j = 0; j <= n; j++){
// 			int notTake = 0 + dp[i - 1][j];
// 			int rodLength = i + 1;
// 			int take = -1e9;
// 			if(rodLength <= j) take = price[i] + dp[i][j - rodLength];
// 			dp[i][j] = max(notTake, take);
// 		}
// 	}
// 	return dp[n - 1][n];
// }

// TABULATION + SPACE OPTIMIZED
// int cutRod(vector<int> &price, int n)
// {
// 	vector<int> prev(n + 1, 0), curr(n + 1, 0);
// 	for(int i = 0; i <= n; i++){
// 		prev[i] = i * price[0];
// 	}
// 	for(int i = 1; i < n; i++){
// 		for(int j = 0; j <= n; j++){
// 			int notTake = 0 + prev[j];
// 			int rodLength = i + 1;
// 			int take = -1e9;
// 			if(rodLength <= j) take = price[i] + curr[j - rodLength];
// 			curr[j] = max(notTake, take);
// 		}
// 		prev = curr;
// 	}
// 	return prev[n];
// }

// TABULATION + SUPER SPACE OPTIMIZED
// int cutRod(vector<int> &price, int n)
// {
// 	vector<int> prev(n + 1, 0);
// 	for(int i = 0; i <= n; i++){
// 		prev[i] = i * price[0];
// 	}
// 	for(int i = 1; i < n; i++){
// 		for(int j = 0; j <= n; j++){
// 			int notTake = 0 + prev[j];
// 			int rodLength = i + 1;
// 			int take = -1e9;
// 			if(rodLength <= j) take = price[i] + prev[j - rodLength];
// 			prev[j] = max(notTake, take);
// 		}
// 	}
// 	return prev[n];
// }
int main(){
    
    return 0;
}