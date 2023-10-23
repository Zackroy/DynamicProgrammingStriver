#include<bits/stdc++.h>
using namespace std;
#define ll long long

//RECURSIVE
// int f(vector<int> &wt, vector<int> &v, int ind, int w){
// 	if(ind == 0){
// 		if(wt[0] <= w)
// 			return v[0];
// 		else 
// 			return 0;
		
// 	}
// 	int notTake = 0 + f(wt, v, ind - 1, w);
// 	int take = INT_MIN;
// 	if(wt[ind] <= w) take = v[ind] + f(wt, v, ind - 1, w - wt[ind]);
// 	return max(take, notTake);
// }
// int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight) 
// {
// 	return f(weight, value, n - 1, maxWeight);	
// } 


//MEMOIZED
// int f(vector<int> &wt, vector<int> &v, int ind, int w, vector<vector<int>> &dp){
// 	if(ind == 0){
// 		if(wt[0] <= w)
// 			return v[0];
// 		else 
// 			return 0;
		
// 	}
// 	if(dp[ind][w] != -1) return dp[ind][w];
// 	int notTake = 0 + f(wt, v, ind - 1, w, dp);
// 	int take = INT_MIN;
// 	if(wt[ind] <= w) take = v[ind] + f(wt, v, ind - 1, w - wt[ind], dp);
// 	return dp[ind][w] = max(take, notTake);
// }
// int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight) 
// {
// 	vector<vector<int>> dp(n, vector<int> (maxWeight + 1, -1));
// 	return f(weight, value, n - 1, maxWeight, dp);	
// } 

//TABULATION
// int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight) 
// {
// 	vector<vector<int>> dp(n, vector<int> (maxWeight + 1, 0));
// 	for(int i = weight[0]; i <= maxWeight; i++) 
// 		dp[0][i] = value[0];

// 	for(int i = 1; i < n; i++){
// 		for(int j = 0; j <= maxWeight; j++){
// 			int notTake = 0 + dp[i - 1][j];
// 			int take = INT_MIN;
// 			if(weight[i] <= j) take = value[i] + dp[i - 1][j - weight[i]];
// 			dp[i][j] = max(take, notTake);
// 		}
// 	}
// 	return dp[n - 1][maxWeight];	
// }


// TABULATION + SPACE OPTIMIZED
// int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight) 
// {
// 	vector<int> prev(maxWeight + 1, 0);
// 	for(int i = weight[0]; i <= maxWeight; i++) 
// 		prev[i] = value[0];

// 	for(int i = 1; i < n; i++){
// 		for(int j = maxWeight; j >= 0; j--){
// 			int notTake = 0 + prev[j];
// 			int take = INT_MIN;
// 			if(weight[i] <= j) take = value[i] + prev[j - weight[i]];
// 			prev[j] = max(take, notTake);
// 		}
// 	}	
// 	return prev[maxWeight];	
// } 

// TABULATION + SUPER SPACE OPTIMIZED
// int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight) 
// {
// 	vector<int> prev(maxWeight + 1, 0), curr(maxWeight + 1, 0);
// 	for(int i = weight[0]; i <= maxWeight; i++) 
// 		prev[i] = value[0];

// 	for(int i = 1; i < n; i++){
// 		for(int j = 0; j <= maxWeight; j++){
// 			int notTake = 0 + prev[j];
// 			int take = INT_MIN;
// 			if(weight[i] <= j) take = value[i] + prev[j - weight[i]];
// 			curr[j] = max(take, notTake);
// 		}
// 		prev = curr;
// 	}
// 	return prev[maxWeight];	
// } 

int main(){
    
    return 0;
}