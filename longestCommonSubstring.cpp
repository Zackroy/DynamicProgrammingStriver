#include<bits/stdc++.h>
using namespace std;
#define ll long long

// TABULATION
// int lcs(string &str1, string &str2){
//     int n = str1.size();
//     int m = str2.size();
//     vector<vector<int>> dp(n + 1, vector<int> (m + 1, 0));
//     for(int i = 0; i <= n; i++) dp[i][0] = 0;
//     for(int i = 0; i <= m; i++) dp[0][i] = 0;
//     int ans = 0;
//     for(int i = 1; i <= n; i++){
//         for(int j = 1; j <=m; j++){
//           if (str1[i - 1] == str2[j - 1]) {
//             dp[i][j] = 1 + dp[i - 1][j - 1];
//             ans = max(ans, dp[i][j]);
//           }
//           else dp[i][j] = 0;
//         }
//     }
//     return ans;
// }

// TABULATION + MEMORY OPTIMISED
// int lcs(string &str1, string &str2){
//     int n = str1.size();
//     int m = str2.size();
//     vector<int> prev(m + 1, 0), curr(m + 1, 0);

//     int ans = 0;
//     for(int i = 1; i <= n; i++){
//         for(int j = 1; j <=m; j++){
//           if (str1[i - 1] == str2[j - 1]) {
//             curr[j] = 1 + prev[j - 1];
//             ans = max(ans, curr[j]);
//           }
//           else curr[j] = 0;
//         }
//         prev = curr;
//     }
//     return ans;
// }

int main(){
    
    return 0;
}