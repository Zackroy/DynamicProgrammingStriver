#include<bits/stdc++.h>
using namespace std;
#define ll long long

int countWays(int n)
{
    // declaring  two variables to store the count
    int prev = 1;
    int prev2 = 1;
    // Running for loop to count all possible ways
    for (int i = 2; i <= n; i++) {
        int curr = ((prev % 1000000007) + (prev2 % 1000000007)) % 1000000007;
        prev2 = prev;
        prev = curr;
    }
    return prev % 1000000007;
}
int countWays(itn n){
	if(n == 0) return 1;
	if(n == 1) return 1;
	int left = countWays(n - 1);
	int right = countWays(n - 2);
	return left + right;
 
}

int main(){
    
    return 0;
}