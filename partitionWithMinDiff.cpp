#include<bits/stdc++.h>
using namespace std;
#define ll long long

int minSubsetSumDifference(vector<int>& arr, int n)
{
	int totsum = 0;
	for(int i = 0; i < n; i++) totsum += arr[i];
	int k = totsum;
    vector<bool> front(k + 1, 0), curr(k + 1, 0);
 	front[0] = curr[0] = true;
    if(arr[0] <= k) front[arr[0]] = true;
    for(int ind = 1; ind < n; ind++){
        for(int target = 1; target <= k; target++){
            bool notTake = front[target];
	        bool take = false;
	        if(target >= arr[ind]) take = front[target - arr[ind]];
	        curr[target] = take | notTake;
        }
        front = curr;
    }

	int mini = 1e9;
	for(int s1 = 0; s1 <= totsum/2; s1++){
		if(front[s1] == true) mini = min(mini, abs(s1 - (totsum - s1)));
	}
    return mini;
}


int main(){
    
    return 0;
}