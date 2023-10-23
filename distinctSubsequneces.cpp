#include<bits/stdc++.h>
using namespace std;
#define ll long long

// RECURSION
// int f(string &s, string &t, int i, int j){
// 	if(j < 0) return 1;
// 	if(i < 0) return 0;
// 	if(s[i - 1] == t[j - 1]) {
// 		int take = f(s, t, i - 1, j - 1, dp);
// 	    int leave = f(s, t, i - 1, j, dp);
// 		return (take + leave) % 1000000007;}
// 	else return f(s, t, i - 1, j, dp);
// }

// int distinctSubsequences(string &str, string &sub)
// {
// 	int n = str.size();
// 	int m = sub.size();
// 	vector<vector<int>> dp(n + 1, vector<int> (m + 1, -1));
// 	return f(str, sub, n, m, dp);
// }

// MEMOIZED
// int f(string &s, string &t, int i, int j, vector<vector<int>> &dp){
// 	if(j < 0) return 1;
// 	if(i < 0) return 0;
// 	if(dp[i][j] != -1) return dp[i][j];
// 	if(s[i - 1] == t[j - 1]) {
// 		int take = f(s, t, i - 1, j - 1, dp);
// 	    int leave = f(s, t, i - 1, j, dp);
// 		return dp[i][j] = (take + leave) % 1000000007;}
// 	else return dp[i][j] = f(s, t, i - 1, j, dp);
// 	// return dp[s.size() - 1][t.size() - 1];
// }

// int distinctSubsequences(string &str, string &sub)
// {
// 	int n = str.size();
// 	int m = sub.size();
// 	vector<vector<int>> dp(n + 1, vector<int> (m + 1, -1));
// 	return f(str, sub, n, m, dp);
// }

// TABULATION
// int distinctSubsequences(string &s, string &t)
// {
// 	int n = s.size();
// 	int m = t.size();
// 	vector<vector<int>> dp(n + 1, vector<int> (m + 1, 0));
// 	for(int i = 0; i <= n; i++) dp[i][0] = 1; 
// 	// for(int i = 0; i <= m; i++) dp[0][i] = 0; 
// 	for(int i = 1; i <= n; i++){
// 		for(int j = 1; j <= m; j++){
// 			if(s[i - 1] == t[j - 1]) {
// 			int take = dp[i - 1][j - 1];
// 	    	int leave = dp[i - 1][j];
// 			dp[i][j] = (take + leave) % 1000000007;
// 			}
// 			else dp[i][j] = dp[i - 1][j];			
// 		}
// 	}
// 	return dp[n][m];
// }
int main(){
    
    return 0;
}