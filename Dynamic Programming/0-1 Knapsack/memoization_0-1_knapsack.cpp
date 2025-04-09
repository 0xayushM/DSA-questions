#include<iostream>
using namespace std;

// memoization matrix
int dp[1002][1002];

int knapsack(vector<int>& weight, vector<int>& value, int W, int n) {

    // wherever the value in matrix is not -1, return that value
    if(dp[n][W] != -1)
        return dp[n][W];
    
    if(weight[n-1] <= W)
        dp[n][W] = max(value[n-1] + knapsack(weight, value, W - weight[n-1], n-1), knapsack(weight, value, W, n-1));
    else if(weight[n-1] > W) 
        dp[n][W] = knapsack(weight, value, W, n-1); 
      
    return dp[n][W]; 
}

int main() {

    // initialize the matrix by -1
    memset(dp,-1,sizeof(dp));

    int n;
    cout << "Enter size of array : ";
    cin >> n;
    vector<int> weight,value;
    int W;
    cout << "Enter weight and its value : ";
    for(int i=0;i<n;i++) {
        int wt,val;
        cin >> val >> wt;
        value.push_back(val);
        weight.push_back(wt);
    }
    cout << "Enter maximum weight of knapsack : ";
    cin >> W;
    cout << "Maximum profit = " << knapsack(weight, value, W, n);
}