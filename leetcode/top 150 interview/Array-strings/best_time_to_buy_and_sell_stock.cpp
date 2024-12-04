#include<iostream>
#include<vector>
using namespace std;

int maxProfit(vector<int>& prices) {
    int buy = prices[0];
    int profit = 0;
    for(int i=1;i<prices.size();i++) {
        if(buy > prices[i])
            buy = prices[i];
        else if(prices[i] - buy > profit) 
            profit = prices[i] - buy;
    }
    return profit;
}

int main() {
    int n;
    cin >> n;
    vector<int> prices;
    for(int i=0;i<n;i++) {
        int r;
        cin >> r;
        prices.push_back(r);
    }
    cout << maxProfit(prices);
}