#include<bits/stdc++.h>
using namespace std;
#define ll long long

// RECURSIVE
// int f(string s, string t, int ind1, int ind2,){
// 	if(ind1 < 0 ||ind2 < 0) return 0;

// 	if(s[ind1] == t[ind2]) return 1 + f(s, t, ind1 - 1, ind2 - 1);
// 	return max(f(s, t, ind1 - 1, ind2), f(s, t, ind1, ind2 - 1));
// }
// int lcs(string s, string t)
// {
// 	return f(s, t, s.size() - 1, t.size() - 1);
// }

//MEMOIZED
// int f(string s, string t, int ind1, int ind2, vector<vector<int>> &dp){
// 	if(ind1 < 0 ||ind2 < 0) return 0;
// 	if(dp[ind1][ind2] != -1) return dp[ind1][ind2];
// 	if(s[ind1] == t[ind2]) return dp[ind1][ind2] = 1 + f(s, t, ind1 - 1, ind2 - 1, dp);
// 	return dp[ind1][ind2] = max(f(s, t, ind1 - 1, ind2, dp), f(s, t, ind1, ind2 - 1, dp));
// }
// int lcs(string s, string t)
// {
// 	vector<vector<int>> dp(s.size(), vector<int> (t.size() + 1, -1));
// 	return f(s, t, s.size() - 1, t.size() - 1, dp);
// }

//TABULATION
// int lcs(string s, string t)
// {
// 	int n = s.size();
// 	int m = t.size();
// 	vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
//         for (int i = 0; i <= n; i++) {
//           dp[i][0] = 0;
//         }
//         for (int j = 0; j <= m; j++) {
//           dp[0][j] = 0;
//         }
//         for(int i = 1; i <= n; i++){
//           for (int j = 1; j <= m; j++) {
//             if (s[i - 1] == t[j - 1]) 
// 				dp[i][j] = 1 + dp[i - 1][j - 1];
//             else 
// 				dp[i][j] = 0 + max(dp[i - 1][j], dp[i][j - 1]);
//           }
//         }
//         return dp[n][m];
// }

//TABULATION + MEMORY OPTIMIZED
// int lcs(string s, string t)
// {
// 	int n = s.size();
// 	int m = t.size();
// 	vector<int> prev(m + 1, 0), curr(m + 1, 0);
//         for (int i = 0; i <= n; i++) {
//           prev[0] = 0;
//         }
//         for(int i = 1; i <= n; i++){
//           for (int j = 1; j <= m; j++) {
//             if (s[i - 1] == t[j - 1]) 
// 				curr[j] = 1 + prev[j - 1];
//             else 
// 				curr[j] = 0 + max(prev[j], curr[j - 1]);
//           }
// 		  prev = curr;
//         }
//         return prev[m];
// }

int main(){
    
    return 0;
}