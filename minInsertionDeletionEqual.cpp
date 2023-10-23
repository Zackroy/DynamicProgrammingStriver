#include<bits/stdc++.h>
using namespace std;
#define ll long long


// TABULATION
// int lcs(string &s, string &t){
//     int n = s.size();
//     int m = t.size();
//     vector<vector<int>> dp(n + 1, vector<int> (m + 1, 0));
//     for(int i = 0; i <= n; i++) dp[i][0] = 0;
//     for(int i = 0; i <= m; i++) dp[0][i] = 0;
//     for(int i = 1; i <= n; i++){
//         for(int j = 1; j <= m; j++){
//             if(s[i - 1] == t[j - 1]) dp[i][j] = 1 + dp[i - 1][j - 1];
//             else dp[i][j] = 0 + max(dp[i - 1][j], dp[i][j - 1]); 
//         }
//     }
//     return dp[n][m];
    
// }

// int canYouMake(string &s1, string &s2){
//     int n = s1.size();
//     int m = s2.size(); 
//     return n + m - (2 * lcs(s1, s2));
// }

// TABULATION + SPACE OPTIMIZED
// int lcs(string &s, string &t){
//     int n = s.size();
//     int m = t.size();
//     vector<int> prev(m + 1, 0), curr(m + 1, 0);

//     for(int i = 1; i <= n; i++){
//         for(int j = 1; j <= m; j++){
//             if(s[i - 1] == t[j - 1]) curr[j] = 1 + prev[j - 1];
//             else curr[j] = 0 + max(prev[j], curr[j - 1]); 
//         }
//         prev = curr;
//     }
//     return prev[m];
    
// }

// int canYouMake(string &s1, string &s2){
//     int n = s1.size();
//     int m = s2.size(); 
//     return n + m - (2 * lcs(s1, s2));
// }

int main(){
    
    return 0;
}