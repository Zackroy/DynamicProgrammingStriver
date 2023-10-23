#include<bits/stdc++.h>
using namespace std;
#define ll long long

int maximumNonAdjacentSum(vector<int> &nums){
	int n = nums.size();
	int prev = nums[0];
	int prev2 = 0;
	for (int i = 1; i < n; ++i)
	{
		int take = nums[i];
		if(i > 1) take += prev2;
		int not_take = 0 + prev;
		int curi = max(take, not_take);
		prev2 = prev;
		prev = curi;
	}
	return prev;
}

int rob(vector<int>& nums) {

	vector<int> temp1, temp2;
	int n = nums.size();
 if(n == 1) return nums[0];

	for (int i = 0; i < n; ++i)
	{
		if(i != 0) temp1.push_back(nums[i]);
		if(i != n - 1) temp2.push_back(nums[i]); 
	}
	return max(maximumNonAdjacentSum(temp1), maximumNonAdjacentSum(temp2));
}

int main(){
    ll t;
    cin >> t;
    while(t--){
    	int n = 3;
    	vector<int> v(n);
    	for(ll i = 0; i < n ; i++)
    	    cin >> v[i];
    	
        cout << rob(v) << endl;
    }
    return 0;
}