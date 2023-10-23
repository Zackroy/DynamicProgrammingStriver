#include<bits/stdc++.h>
using namespace std;
#define ll long long

// RECURSIVE
// long f(long *values, int n, int ind, int buy){
//     if(ind == n) return 0;
//     if(buy){
//         int take = -values[ind] + f(values, n,ind + 1, 0);
//         int notTake = 0 + f(values, n,ind + 1, 1);
//         return max(take, notTake);
//     }
//     else{
//         int take = values[ind] + f(values, n, ind + 1, 1);
//         int notTake = 0 + f(values, n, ind + 1, 0);
//         return max(take, notTake);

//     }
// }

// long getMaximumProfit(long *values, int n)
// {
//   return f(values, n, 0, 1);  
// }

// MEMOIZED
// long f(long *values, int n, int ind, int buy, vector<vector<long>> &dp){
//     if(ind == n) return 0;
//     if(dp[ind][buy] != -1) return dp[ind][buy];
//     long profit = 0;
//     if(buy){
//         int take = -values[ind] + f(values, n,ind + 1, 0, dp);
//         int notTake = 0 + f(values, n,ind + 1, 1, dp);
//         profit = max(take, notTake);
//     }
//     else{
//         int take = values[ind] + f(values, n, ind + 1, 1, dp);
//         int notTake = 0 + f(values, n, ind + 1, 0, dp);
//         profit = max(take, notTake);

//     }
//     return dp[ind][buy] = profit;  
// }

// long getMaximumProfit(long *values, int n)
// {   
//     vector<vector<long>> dp(n + 1, vector<long> (2, -1));
//     return f(values, n, 0, 1, dp);  
// }

// TABULATION
// long getMaximumProfit(long *values, int n)
// {   
//     vector<vector<long>> dp(n + 1, vector<long> (2, 0));
//     dp[n][0] = dp[n][1] = 0;
//     long profit = 0;
//     for(int ind = n - 1; ind >= 0; ind--){
//         for(int buy = 0; buy <= 1; buy++){
//             if(buy){
//             profit = max(-values[ind] + dp[ind + 1][0], 0 + dp[ind + 1][1]);
//         }
//         if(buy == 0){
//             profit = max(values[ind] + dp[ind + 1][1], 0 + dp[ind + 1][0]);

//         }
//         dp[ind][buy] = profit;
//         }
//     }
//     return dp[0][1];  
// }

// TABULATION + SPACE OPTIMIZED
// long getMaximumProfit(long *values, int n)
// {   
//     vector<long> ahead(2, 0), curr(2, 0);
//     ahead[0] = ahead[1] = 0;
//     long profit = 0;
//     for(int ind = n - 1; ind >= 0; ind--){
//         for(int buy = 0; buy <= 1; buy++){
//             if(buy){
//             profit = max(-values[ind] + ahead[0], 0 + ahead[1]);
//         }
//         if(buy == 0){
//             profit = max(values[ind] + ahead[1], 0 + ahead[0]);

//         }
//         curr[buy] = profit;
//         }
//         ahead = curr;
//     }
//     return ahead[1];  
// }

int main(){
    
    return 0;
}