#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007


int fib(int m, int n, vector<vector<int>> &dp, vector<vector<int>> &mat){
	if(m >= 0 && n >=0 && mat[m][n] == -1) return 0;

	if(m == 0 && n == 0) return 1;
	if(m == -1 || n == -1) return 0;
	if(dp[m][n] != -1) return dp[m][n];

	int up = fib(m - 1, n, dp, mat);
	int down = fib(m, n - 1, dp, mat);

	return dp[m][n] = up + down;
}


int uniquePaths(int m, int n, vector< vector< int> > &mat){
	vector<vector<int>> dp(m, vector<int> n);
	
	for (int i = 0; i < m - 1; ++i)
	{
		for (int j = 0; j < n - 1; ++j)
		{
			if(mat[i][j] == -1) dp[i][j] = 0;
			else if(i == 0 && j == 0) dp[0][0] = 1;
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

int uniquePaths2(int m, int n, vector< vector< int> > &mat){
	vector<int> prev(n, 0);
	
	for (int i = 0; i < m - 1; ++i)
	{
		vector<int> cur(n, 0);
		for (int j = 0; j < n - 1; ++j)
		{
			if(mat[m][n] == -1) cur[j]  = 0;
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

int mazeObstacles(int n, int m, vector< vector< int> > &mat) {
	vector<vector<int>> dp(m + 1, vector<int> (n + 1, -1));
	// memset(dp, -1, sizeof(dp);
	return fib(m - 1, n - 1, dp, mat);    
}


int mazeObstacles(int n, int m, vector<vector<int> > &maze){
vector<int> prev(m,0);
    for(int i=0; i<n; i++){
        vector<int> temp(m,0);
        for(int j=0; j<m; j++){
            if(maze[i][j]==-1){
                temp[j]=0;
                continue;
            }
            if(i==0 && j==0){
                temp[j]=1;
                continue;
            }
            
            int up=0;
            int left =0;
            
            if(i>0)
                up = prev[j];
            if(j>0)
                left = temp[j-1];
                
            temp[j] = (up + left) % mod;
        }
        prev = temp;
    }
    
    return prev[m-1];

}

int main(){
    ll rows, columns;
    cin >> rows >> columns;
    vector<vector<int>> matrix(rows, vector<int>(columns));
    for (ll i = 0; i < rows; i++) {
        for (ll j = 0; j < columns; j++) {
            cin >> matrix[i][j];
        }
    }
    cout << mazeObstacles(3, 3, matrix); 
    return 0;
}