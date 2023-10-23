#include<bits/stdc++.h>
using namespace std;
#define ll long long

// RECURSION
// int f(string s, string t, int i, int j){
//     if(j < 0) return i + 1;
//     if(i < 0) return j + 1;
//     if(s[i] == t[j]) return f(s, t, i - 1, j - 1);
//     else return 1 + min(f(s, t, i - 1, j), min(f(s, t, i - 1, j - 1), f(s, t, i, j - 1)));
// }

// int editDistance(string str1, string str2){
//     int n = str1.size();
//     int m = str2.size(); 
//     return f(str1, str2, n - 1, m - 1);
// }

// MEMOISED
// int f(string s, string t, int i, int j, vector<vector<int>> &dp){

//     if(j == 0) return i;
//     if(i == 0) return j;
//     if(dp[i][j] != -1) return dp[i][j];
//     if(s[i - 1] == t[j - 1]) return dp[i][j] = f(s, t, i - 1, j - 1, dp);
//     else return dp[i][j] = 1 + min(f(s, t, i - 1, j, dp), min(f(s, t, i - 1, j - 1, dp), f(s, t, i, j - 1, dp)));
// }

// int editDistance(string str1, string str2){
//     int n = str1.size();
//     int m = str2.size(); 
//     vector<vector<int>> dp(n + 1, vector<int> (m + 1, -1));
//     return f(str1, str2, n, m, dp);
// }

// TABULATION
// int editDistance(string s, string t){
//     int n = s.size();
//     int m = t.size(); 
//     vector<vector<int>> dp(n + 1, vector<int> (m + 1, 0));
//     for(int i = 0; i <= n; i++) dp[i][0] = i;
//     for(int j = 0; j <= m; j++) dp[0][j] = j;
//     for(int i = 1; i <= n; i++){
//         for(int j = 1; j <=m; j++){
//             if(s[i - 1] == t[j - 1]) dp[i][j] = dp[i - 1][j - 1];
//             else dp[i][j] = 1 + min(dp[i - 1][j], min(dp[i - 1][j - 1], dp[i][j - 1]));
//         }
//     }
//     return dp[n][m];
// }

// TABULATION + SPACE OPTIMIZED
// int editDistance(string s, string t)
// {
//     int n = s.size();
//     int m = t.size(); 
//     vector<int> prev(m + 1, 0), curr(m + 1, 0);
//     for(int j = 0; j <= m; j++) prev[j] = j;
//     for(int i = 1; i < n + 1; i++){
//         curr[0] = i;
//         for(int j = 1; j < m + 1; j++){
//             if(s[i - 1] == t[j - 1]) curr[j] = prev[j - 1];
//             else curr[j] = 1 + min(prev[j], min(prev[j - 1], curr[j - 1]));
//         }
//         prev = curr;
//     }
//     return prev[m];
// }


int main(){
    
    return 0;
}