#include<bits/stdc++.h>
using namespace std;
#define ll long long

 
int maximumProfit(vector<int> &prices){
    int temp = prices[0];
    int maxi = 0;
    for(int i = 1; i < prices.size(); i++){
        int profit = prices[i] - temp;
        maxi = max(profit, maxi);
        temp = min(temp, prices[i]);
    }
    return maxi;
}

int main(){
    
    return 0;
}