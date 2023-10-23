#include<bits/stdc++.h>
using namespace std;
#define ll long long

//RECURSIVE
// int fib(int i, int j, vector<vector<int>> &matrix){
	
// 	if(j < 0 || j >= matrix[0].size()) return -1e8;
// 	if(i == 0) return matrix[0][j];
// 	int up = matrix[i][j] + fib(i - 1, j, matrix);
// 	int ldg = matrix[i][j] + fib(i - 1, j - 1, matrix);
// 	int rdg = matrix[i][j] + fib(i - 1, j + 1, matrix);
// 	return max(up, max(ldg, rdg));


// }

// int getMaxPathSum(vector<vector<int>> &matrix)
// {	
// 	int n = matrix.size();
// 	int m = matrix[0].size();
//     int maxi = -1e8;
//     for(int j = 0; j < m; j++){
//         maxi = max(maxi, fib(n - 1, j, matrix));
//     }

//     return maxi;
// }


//MEMOIZED
// int fib(int i, int j, vector<vector<int>> &matrix, vector<vector<int>> &dp){
	
// 	if(j < 0 || j >= matrix[0].size()) return -1e8;
// 	if(i == 0) return matrix[0][j];
// 	if(dp[i][j] != -1) return dp[i][j];
// 	int up = matrix[i][j] + fib(i - 1, j, matrix, dp);
// 	int ldg = matrix[i][j] + fib(i - 1, j - 1, matrix, dp);
// 	int rdg = matrix[i][j] + fib(i - 1, j + 1, matrix, dp);
// 	return dp[i][j] = max(up, max(ldg, rdg));

// }

// int getMaxPathSum(vector<vector<int>> &matrix)
// {	
	
// 	int n = matrix.size();
// 	int m = matrix[0].size();
// 	vector<vector<int>> dp(n, vector<int> (m, -1));
//     int maxi = -1e8;
//     for(int j = 0; j < m; j++){
//         maxi = max(maxi, fib(n - 1, j, matrix, dp));
//     }

//     return maxi;
// }

//TABULATED
// int getMaxPathSum(vector<vector<int>> &matrix)
// {	
	
// 	int n = matrix.size();
// 	int m = matrix[0].size();
// 	vector<vector<int>> dp(n, vector<int> (m, 0));
// 	for(int j = 0; j < m; j++)
// 		dp[0][j] = matrix[0][j];
// 	for(int i = 1; i < n; i++){
// 		for(int j = 0; j < m; j++){
// 				int up = matrix[i][j] + dp[i -1][j];
// 				int ldg = matrix[i][j];
// 				if(j - 1 >= 0) ldg += dp[i - 1][j - 1];
// 				else ldg += -1e9;
// 				int rdg = matrix[i][j];
// 				if(j + 1 < m) rdg += dp[i - 1][j + 1];
// 				else rdg += -1e9;
// 				dp[i][j] = max(up, max(ldg, rdg));
// 		}
// 	}
//     int maxi = INT_MIN;
	
//     for(int j = 0; j < m; j++){
//         maxi = max(maxi, dp[n - 1][j]);
//     }

//     return maxi;
// }

//TABULATED + SPACE OPTIMIZED
int getMaxPathSum(vector<vector<int>> &matrix)
{	
	
	int n = matrix.size();
	int m = matrix[0].size();
	vector<int> prev(m, 0), curr(m, 0);
	for(int j = 0; j < m; j++)
		prev[j] = matrix[0][j];
	for(int i = 1; i < n; i++){
		for(int j = 0; j < m; j++){
				int up = matrix[i][j] + prev[j];
				int ldg = matrix[i][j];
				if(j - 1 >= 0) ldg += prev[j - 1];
				else ldg += -1e9;
				int rdg = matrix[i][j];
				if(j + 1 < m) rdg += prev[j + 1];
				else rdg += -1e9;
				curr[j] = max(up, max(ldg, rdg));
		}
		prev = curr;
	}
    int maxi = INT_MIN;
	
    for(int j = 0; j < m; j++){
        maxi = max(maxi, prev[j]);
    }

    return maxi;
}

int main(){
    
    return 0;
}