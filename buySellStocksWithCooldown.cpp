#include<bits/stdc++.h>
using namespace std;
#define ll long long

// RECURSIVE
// int f(vector<int> & values, int n, int ind, int buy){
//     if(ind >= n) return 0;
//     int profit = 0;
//     if(buy) profit = max(-values[ind] + f(values, n, ind + 1, 0), 0 + f(values, n, ind + 1, 1)); 
//     if(buy == 0) profit = max(values[ind] + f(values, n, ind + 2, 1), 0 + f(values, n, ind + 1, 0));
//     return profit;
// }

// int stockProfit(vector<int> &prices){
//     int n = prices.size();
//     return f(prices, n, 0, 1);
// }

// MEMOIZED
// int f(vector<int> & values, int n, int ind, int buy, vector<vector<int>> &dp){
//     if(ind >= n) return 0;
//     if(dp[ind][buy] != -1) return dp[ind][buy];
//     int profit = 0;

//     if(buy) profit = max(-values[ind] + f(values, n, ind + 1, 0, dp), 0 + f(values, n, ind + 1, 1, dp)); 
//     if(buy == 0) profit = max(values[ind] + f(values, n, ind + 2, 1, dp), 0 + f(values, n, ind + 1, 0, dp));
//     return dp[ind][buy] = profit;
// }
// int stockProfit(vector<int> &prices){
//     int n = prices.size();
//     vector<vector<int>> dp(n + 1, vector<int>(2, -1));
//     return f(prices, n, 0, 1, dp);
// }

// TABULATION
// int stockProfit(vector<int> &values){
//     int n = values.size();
//     vector<vector<long>> dp(n + 2, vector<long> (2, 0));
//     dp[n][0] = dp[n][1] = 0;
//     long profit = 0;
//     for(int ind = n - 1; ind >= 0; ind--){
//         for(int buy = 0; buy <= 1; buy++){
//             if(buy){
//             profit = max(-values[ind] + dp[ind + 1][0], 0 + dp[ind + 1][1]);
//         }
//         if(buy == 0){
//             profit = max(values[ind] + dp[ind + 2][1], 0 + dp[ind + 1][0]);

//         }
//         dp[ind][buy] = profit;
//         }
//     }
//     return dp[0][1];  
// }

int main(){
    
    return 0;
}