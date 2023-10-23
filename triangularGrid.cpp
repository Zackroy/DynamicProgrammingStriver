#include<bits/stdc++.h>

using namespace std;
#define ll long long


// int fib(int i, int j, vector<vector<int>> &triangle, int n){
// 	if(i == n - 1) return triangle[n -1][j];
// 	int d = triangle[i][j] + fib(i + 1,  j, triangle, n);
// 	int dg = triangle[i][j] + fib(i + 1, j + 1, triangle, n);
// 	return min(d, dg);
// }
 
// int minimumPathSum(vector<vector<int>>& triangle, int n){
	
// 	return fib(0, 0, triangle, n);
// }


//MEMOIZED
// int fib(int i, int j, vector<vector<int>> &triangle, int n, vector<vector<int>> &dp){
// 	if(i == n - 1) return triangle[n - 1][j];
// 	if(dp[i][j] != -1) return dp[i][j];
// 	int d = triangle[i][j] + fib(i + 1,  j, triangle, n, dp);
// 	int dg = triangle[i][j] + fib(i + 1, j + 1, triangle, n, dp);
// 	return dp[i][j] = min(d, dg);
// }
 
// int minimumPathSum(vector<vector<int>>& triangle, int n){
// 	vector<vector<int>> dp(n, vector<int>(n, -1));
// 	return fib(0, 0, triangle, n, dp);
// }


//TABULATION
int minimumPathSum(vector<vector<int>>& triangle, int n){
	vector<vector<int>> dp(n, vector<int>(n, 0));
	for (int j = 0; j < n; j++)
		{
			dp[n - 1][j] = triangle[n - 1][j];
		}	
	for (int i = n - 2; i >= 0 n; i--)
	{
		for (int j = i; j >= 0; j--)
		{
			int d = triangle[i][j] + dp[i + 1][j];
			int dg = triangle[i][j] + dp[i + 1][j + 1];
			dp[i][j] = min(d, dg);
		}
	}
	return dp[0][0];
}

//TABULATION + SPACE OPTIMIZED
int minimumPathSum(vector<vector<int>>& triangle, int n){
	vector<int> front(n, 0), curr(n, 0);
	for (int j = 0; j < n; j++)
		{
			front[j] = triangle[n - 1][j];
		}	
	for (int i = n - 2; i >= 0; i--)
	{
		for (int j = i; j >= 0; j--)
		{
			int d = triangle[i][j] + front[j];
			int dg = triangle[i][j] + front[j + 1];
			curr[j] = min(d, dg);
		}
		front = curr;
	}
	return front[0];
}
int main(){

    return 0;
}