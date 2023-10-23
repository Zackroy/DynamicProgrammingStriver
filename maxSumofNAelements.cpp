#include <bits/stdc++.h> 
using namespace std;
int f(vector<int> &v, int index, vector<int> &dp){
    if(index == 0) return v[index];
    if(index < 0) return 0;
    if(dp[index] != -1) return dp[index];
    int pick = v[index] + f(v, index - 2, dp);
    int not_pick = 0 + f(v, index - 1, dp);

    return dp[index] = max(pick, not_pick);
}

int maximumNonAdjacentSum(vector<int> &nums){
    
    int n = nums.size();
    vector<int> dp(n, -1);
    return f(nums, n - 1, dp);
}



int main(){
    return 0;

}
