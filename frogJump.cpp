#include<bits/stdc++.h>
using namespace std;
#define ll long long

int f(int ind, vector<int> &heights, vector<int> &dp){
	if(ind == 0) return 0;
	if(dp[ind] != -1) return dp[ind];
	int left = f(ind - 1, heights, dp) + abs(heights[ind] - heights[ind - 1]);
	int right = INT_MAX;
	if(ind > 1){
		right = f(ind - 2, heights, dp) + abs(heights[ind] - heights[ind - 2]);
	}
	return dp[ind] = min(left, right);
}
int frogJumpRecur(int n, vector<int> &heights){
	vector<int> dp(n + 1, -1);
	return f(n - 1, heights, dp);
}
int frogJump(int n, vector<int> &heights){
	vector<int> dp(n + 1, 0);
	dp[0] = 0;
	for (int i = 1; i < n; ++i)
	{
		int fs = dp[i - 1] + abs(heights[i] - heights[i - 1]);
		int ss = INT_MAX;
		if(i > 1) ss = dp[i - 2] + abs(heights[i] - heights[i - 2]);

		dp[i] = min(fs, ss);
	}
	return dp[n - 1];
}
int frogJumpSpaceOpt(int n, vector<int> &heights){
	int prev = 0;
	int prev2 = 0;
	for (int i = 1; i < n; ++i)
	{
		int fs = prev + abs(heights[i] - heights[i - 1]);
		int ss = INT_MAX;
		if(i > 1) ss = prev2 + abs(heights[i] - heights[i - 2]);

		int curr = min(fs, ss);
		prev2 = prev;
		prev = curr;
	}
	return prev;
}
int solveUtil(int ind, vector<int>& height, vector<int>& dp, int k){
    // dp[0]=0;
    // for(int i=1;i<n;i++){
    //     int mmSteps = INT_MAX;
        
    //     for(int j=1;j<=k;j++){
    //         if(i-j>=0){
    //             int jump = dp[i-j]+ abs(height[i]- height[i-j]);
    //             mmSteps= min(jump, mmSteps);
    //         }
    //     }
    //     dp[i]= mmSteps;
    // }
    // return dp[n-1];
   // RECUR SOLUTION
    if(ind==0) return 0;
    if(dp[ind]!=-1) return dp[ind];
    
    int mmSteps = INT_MAX;
        
    for(int j=1;j<=k;j++){
        if(ind-j>=0){
      int jump = solveUtil(ind-j, height, dp, k)+ abs(height[ind]- height[ind-j]);
            mmSteps= min(jump, mmSteps);
        }
    }
    return dp[ind]= mmSteps;
    
}

int frogJumpwithKRecur(int n, vector<int>& height , int k){
    vector<int> dp(n,-1);
    return solveUtil(n-1, height, dp, k);
}


int frogJumpwithKTabulation(int n, vector<int>& height , int k){
    vector<int> dp(n,-1);
    return solveUtil(n, height, dp, k);
}

int main(){
	ll t;
	cin >> t;
	while(t--){
		
		int n;
		cin >> n;
		vector<int> v(n);
		for(ll i = 0; i < n ; i++)
		    cin >> v[i];
		
	    cout << frogJumpSpaceOpt(n, v) << endl;
	}
    
    
}
