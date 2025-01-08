#include<iostream>
#include<vector>
using namespace std;

int maxProfit(vector<int>& prices) {
    int maxProfit = 0;
    for(int i=1;i<prices.size();i++) {
        if(prices[i] > prices[i-1])
            maxProfit += prices[i] - prices[i-1];
    }
    return maxProfit;
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
