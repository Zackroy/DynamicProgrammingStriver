#include<bits/stdc++.h>
using namespace std;
#define ll long long

// RECURSION
// bool allStar(string &pattern, int i){
//    for(int j = 0; j <= i; j++)
//       if(pattern[j] != '*') return false;
//     return true;
// }
// bool f(string s, string t, int i, int j){
//    if(i < 0 && j < 0) return true;
//    if(i < 0 && j >= 0) return false;  
//    if(j < 0 && i >= 0) return allStar(s, i);
//    if(s[i] == t[j] || s[i] == '?') return f(s, t, i - 1, j - 1);
//    else {
//       if (s[i] == '*') return f(s, t, i - 1, j) || f(s, t, i, j - 1);
//       else return false;
//    }
   
// }
// bool wildcardMatching(string pattern, string text)
// {
//    int n = pattern.size();
//    int m = text.size();
//    return f(pattern, text, n - 1, m - 1);
// }

// MEMOIZED
// bool allStar(string &pattern, int i){
//    for(int j = 0; j <= i; j++)
//       if(pattern[j] != '*') return false;
//     return true;
// }
// bool f(string &s, string &t, int i, int j, vector<vector<int>> &dp){
//    if(i < 0 && j < 0) return true;
//    if(i < 0 && j >= 0) return false;  
//    if(j < 0 && i >= 0) return allStar(s, i);
//    if(dp[i][j] != -1) return dp[i][j];
//    if(s[i] == t[j] || s[i] == '?') return dp[i][j] = f(s, t, i - 1, j - 1, dp);
   
//    if (s[i] == '*') return dp[i][j] = f(s, t, i - 1, j, dp) || f(s, t, i, j - 1, dp);
//       // else return false;
//    return dp[i][j] = false;
   
// }
// bool wildcardMatching(string pattern, string text)
// {
//    int n = pattern.size();
//    int m = text.size();
//    vector<vector<int>> dp(n, vector<int> (m, -1));
//    return f(pattern, text, n - 1, m - 1, dp);
// }

// TABULATION
// bool wildcardMatching(string s, string t)
// {
//    int n = s.size();
//    int m = t.size();
//    vector<vector<bool>> dp(n + 1, vector<bool> (m + 1, false));
//    dp[0][0] = true;
//    for(int i = 1; i <=m; i++){
//       dp[0][i] = false;
//    }
//    for(int i = 1; i <= n; i++){
//       int f1 = true;
//       for(int j = 1; j <= i; j++){
//          if(s[j - 1] != '*'){
//             f1 = false;
//             break;
//          }
//       }
//       dp[i][0] = f1;
//    }
//    for(int i = 1; i <= n; i++){
//       for(int j = 1; j <= m; j++){
//             if(s[i - 1] == t[j - 1] || s[i - 1] == '?') dp[i][j] = dp[i - 1][j - 1];
   
//             else if (s[i - 1] == '*') dp[i][j] = dp[i - 1][j] || dp[i][j - 1];
//       // else return false;
//             else dp[i][j] = false;
//       }
//    }
//    return dp[n][m]; 
// }

// TABULATION + SPACE OPTIMIZED
// bool wildcardMatching(string s, string t)
// {
//    int n = s.size();
//    int m = t.size();
//    vector<bool> prev(m + 1, false), curr(m + 1, false);
//    prev[0] = true;
//    for(int i = 1; i <=m; i++){
//       prev[i] = false;
//    }

//    for(int i = 1; i <= n; i++){
//          int f1 = true;
//       for(int j = 1; j <= i; j++){
//          if(s[j - 1] != '*'){
//             f1 = false;
//             break;
//          }
//       }
//       curr[0] = f1;
//       for(int j = 1; j <= m; j++){
//             if(s[i - 1] == t[j - 1] || s[i - 1] == '?') curr[j] = prev[j - 1];
   
//             else if (s[i - 1] == '*') curr[j] = prev[j] || curr[j - 1];
//             else curr[j] = false;
//       }
//       prev = curr;
//    }
//    return prev[m]; 
// }

int main(){
    
    return 0;
}