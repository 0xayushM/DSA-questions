#include<iostream>
using namespace std;

int knapsack(vector<int>& weight, vector<int>& value, int W, int n) {
    
    // base condition which is if the knapsack is full or no items are left to collect
    if(W == 0 || n == 0)
        return 0;
    int pick = 0;

    // choice diagram whether to choose the item based on its weight

    if(weight[n-1] <= W) 
        pick = value[n-1] + knapsack(weight, value, W - weight[n-1], n-1), knapsack(weight, value, W, n-1);
    int notPick = knapsack(weight, value, W, n-1);
    
    return max(pick, notPick);
}

int main() {
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