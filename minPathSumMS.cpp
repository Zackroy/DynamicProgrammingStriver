#include<bits/stdc++.h>
using namespace std;
#define ll long long
int fib(int i, int j, vector<vector<int>> &grid, 
	vector<vector<int>> &dp){
	if(i == 0 && j == 0) return grid[0][0];
	if(i < 0 || j < 0) return 1e9;

	if(dp[i][j] != -1) return dp[i][j];
	
		int up = grid[i][j] + fib(i - 1, j, grid, dp);
		int down = grid[i][j] + fib(i, j - 1, grid, dp);
		return dp[i][j] = min(up, down);

	
	// return dp[m - 1][n - 1];

}
int minSumPath(vector<vector<int>> &grid){
	int n = grid.size();
	int m = grid[0].size();
	vector<vector<int>> dp(n, vector<int> (m, -1));
	return fib(n - 1, m - 1, grid, dp);
}

int minSumPath2(vector<vector<int>> &grid) {
	vector<int> prev(grid[0].size(), 0);
    for (int i = 0; i < grid.size(); ++i)
    {
    	vector<int> temp(grid[0].size(), 0);
    	for (int j = 0; j < grid[0].size(); ++j)
    	{
    		if(i == 0 && j == 0) temp[j] = grid[i][j];
    		else{
    			int up = grid[i][j], left = grid[i][j];
    			if(i > 0) up +=prev[j];
    			else up += 1e9;
    			if(j > 0) left += temp[j - 1]; 
    			else left += 1e9;
    			temp[j] = min(up, left);

    		}

    	}
    	prev = temp;
    }
    return prev[grid[0].size() - 1];
}

int main(){
    
    ll t;
    cin >> t;
    while(t--){
        
    ll rows, columns;
        cin >> rows >> columns;
        vector<vector<int>> matrix(rows, vector<int>(columns));
        for (ll i = 0; i < rows; i++) {
            for (ll j = 0; j < columns; j++) {
                cin >> matrix[i][j];
            }
        }
        cout << minSumPath2(matrix) << endl; }
    return 0;
}