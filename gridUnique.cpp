#include<bits/stdc++.h>
using namespace std;
#define ll long long

int fib(int m, int n, vector<vector<int>> &dp){
	if(m == 0 && n == 0) return 1;
	if(m == -1 || n == -1) return 0;
	if(dp[m][n] != -1) return dp[m][n];

	int up = fib(m - 1, n, dp);
	int down = fib(m, n - 1, dp);

	return dp[m][n] = up + down;
}


int uniquePaths(int m, int n) {
	vector<vector<int>> dp(m + 1, vector<int> (n + 1, -1));
	// memset(dp, -1, sizeof(dp);
	return fib(m - 1, n - 1, dp);
}

int uniquePaths(int m, int n){
	vector<vector<int>> dp(m + 1, vector<int> (n + 1));
	
	for (int i = 0; i < m - 1; ++i)
	{
		for (int j = 0; j < n - 1; ++j)
		{

			if(i == 0 && j == 0) dp[0][0] = 1;
			else{
				int up = 0;
				int down = 0;
			if(i > 0) up = dp[i - 1][j];
			if(j > 0) down = dp[i][j - 1];
			dp[i][j] = up + down;
			}
		}
	}
	return dp[m - 1][n - 1];
}
int uniquePaths(int m, int n){
	vector<int> prev(n, 0);
	
	for (int i = 0; i < m - 1; ++i)
	{
		vector<int> cur(n, 0);
		for (int j = 0; j < n - 1; ++j)
		{

			if(i == 0 && j == 0) cur[j] = 1;
			else{
				int up = 0;
				int down = 0;
			if(i > 0) up = prev[j];
			if(j > 0) down = cur[j - 1];
			cur[j] = up + down;
			}
		}
		prev = cur;	 
	}
	return prev[n - 1];
}
int main(){
	cout << uniquePaths(3, 3); 
    
    return 0;
}