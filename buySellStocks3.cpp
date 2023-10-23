#include<bits/stdc++.h>
using namespace std;
#define ll long long

// RECURSIVE
// int f(vector<int> & values, int n, int ind, int buy, int cap){
//     if(cap == 0) return 0;
//     if(ind == n) return 0;
//     int profit = 0;

//     if(buy) profit = max(- values[ind] + f(values, n, ind + 1, 0, cap), 0 + f(values, n, ind + 1, 1, cap)); 
//     if(buy == 0) profit = max(values[ind] + f(values, n, ind + 1, 1, cap - 1), 0 + f(values, n, ind + 1, 0, cap));
//     return profit;
// }
// int maxProfit(vector<int>& prices)
// {
//     return f(prices, prices.size(), 0, 1, 2);
// }

// MEMOIZED
// int f(vector<int> & values, int n, int ind, int buy, int cap, vector<vector<vector<int>>> &dp){
//     if(cap == 0) return 0;
//     if(ind == n) return 0;
//     if(dp[ind][buy][cap] != -1) return dp[ind][buy][cap];
//     int profit = 0;

//     if(buy) profit = max(-values[ind] + f(values, n, ind + 1, 0, cap, dp), 0 + f(values, n, ind + 1, 1, cap, dp)); 
//     if(buy == 0) profit = max(values[ind] + f(values, n, ind + 1, 1, cap - 1, dp), 0 + f(values, n, ind + 1, 0, cap, dp));
//     return dp[ind][buy][cap] = profit;
// }
// int maxProfit(vector<int>& prices)
// {
//     int n = prices.size();
//     int cap = 2;
//     vector<vector<vector<int>>> dp(n + 1, vector<vector<int>> (2, vector<int> (cap + 1, -1)));
//     return f(prices, n, 0, 1, cap, dp);
// }


// TABULATION
// int maxProfit(vector<int>& values)
// {
//     int n = values.size();
//     int cap = 2;
//     vector<vector<vector<int>>> dp(n + 1, vector<vector<int>> (2, vector<int> (cap + 1, 0)));
//     for(int ind = 0; ind < n; ind++){
//         for(int buy = 0; buy <= 1; buy++){
//             dp[ind][buy][0] = 0;
//         }
//     }
//     for(int buy = 0; buy <= 1; buy++){
//         for(int K = 0; K < cap; K++){
//             dp[n][buy][K] = 0;
//         }
//     }
//     int profit = 0;
//     for(int ind = n - 1; ind >= 0; ind--){
//         for(int buy = 0; buy <= 1; buy++){
//             for(int K = 1; K <= cap; K++){
//                 if(buy) profit = max(-values[ind] + dp[ind + 1][0][K], 0 + dp[ind + 1][1][K]); 
//                 if(buy == 0) profit = max(values[ind] + dp[ind + 1][1][K - 1], 0 + dp[ind + 1][0][K]);
//                 dp[ind][buy][K] = profit;  
//             }
//         }
//     }
//     return dp[0][1][cap];
// }

// TABULATION + SPACE OPTIMIZED
// int maxProfit(vector<int>& values)
// {
//     int n = values.size();
//     int cap = 2;
//     vector<vector<int>> ahead(2, vector<int> (cap + 1, 0));
//     vector<vector<int>> curr(2, vector<int> (cap + 1, 0));
//     for(int ind = 0; ind < n; ind++){
//         for(int buy = 0; buy <= 1; buy++){
//             ahead[buy][0] = 0;
//         }
//     }
//     for(int buy = 0; buy <= 1; buy++){
//         for(int K = 0; K < cap; K++){
//             ahead[buy][K] = 0;
//         }
//     }
//     int profit = 0;
//     for(int ind = n - 1; ind >= 0; ind--){
//         for(int buy = 0; buy <= 1; buy++){
//             for(int K = 1; K <= cap; K++){
//                 if(buy) profit = max(-values[ind] + ahead[0][K], 0 + ahead[1][K]); 
//                 if(buy == 0) profit = max(values[ind] + ahead[1][K - 1], 0 + ahead[0][K]);
//                 curr[buy][K] = profit;  
//             }
//         }
//         ahead = curr;
//     }
//     return ahead[1][cap];
// }

int main(){
    
    return 0;
}