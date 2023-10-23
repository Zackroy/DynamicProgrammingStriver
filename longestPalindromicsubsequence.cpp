#include<bits/stdc++.h>
using namespace std;
#define ll long long

// TABULATION
// int longestPalindromeSubsequence(string s)
// {
//     string t = s;
//     reverse(t.begin(), t.end());
//     int n = s.size();
//     vector<vector<int>> dp(n + 1, vector<int> (n + 1, 0));
//     for(int i = 0; i <= n; i++) dp[i][0] = 0;
//     for(int i = 0; i <= n; i++) dp[0][i] = 0;
//     for(int i = 1; i <= n; i++){
//         for(int j = 1; j <= n; j++){
//             if(s[i - 1] == t[j - 1]) dp[i][j] = 1 + dp[i - 1][j - 1];
//             else dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
//         }
//     }
//     return dp[n][n];
    
// }

// TABULATION + SPACE OPTIMISED
// int longestPalindromeSubsequence(string s)
// {
//     string t = s;
//     reverse(t.begin(), t.end());
//     int n = s.size();
//     vector<int> prev(n + 1, 0), curr(n + 1, 0);

//     for(int i = 1; i <= n; i++){
//         for(int j = 1; j <= n; j++){
//             if(s[i - 1] == t[j - 1]) curr[j] = 1 + prev[j - 1];
//             else curr[j] = max(prev[j], curr[j - 1]);
//         }
//         prev = curr;
//     }
//     return prev[n];
    
// }

int main(){
    
    return 0;
}