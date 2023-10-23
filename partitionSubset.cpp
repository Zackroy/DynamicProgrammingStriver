#include<bits/stdc++.h>
using namespace std;
#define ll long long

// TABULATED + SPACE OPTIMISED
// bool subsetSumToK(int n, int k, vector<int> &arr) {
//     vector<bool> front(k + 1, 0), curr(k + 1, 0);
//  	front[0] = curr[0] = true;
//     if(arr[0] >= k) front[arr[0]] = true;
//     for(int ind = 1; ind < n; ind++){
//         for(int target = 1; target <= k; target++){
//             bool notTake = front[target];
// 	        bool take = false;
// 	        if(target >= arr[ind]) take = front[target - arr[ind]];
// 	        curr[target] = take | notTake;
//         }
//         front = curr;
//     }
//     return front[k];
// }
// bool canPartition(vector<int> &arr, int n)
// {
// 	int sum = 0;
// 	for(int i = 0; i < n; i++){
// 		sum += arr[i];
// 	}
// 	if(sum % 2) return false;

// 	int target = sum / 2;
// 	return subsetSumToK(n, target, arr);
// }


int main(){
    
    return 0;
}