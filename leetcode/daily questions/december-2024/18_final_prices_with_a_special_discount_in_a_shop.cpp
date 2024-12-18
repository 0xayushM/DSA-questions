#include<iostream>
#include<vector>
using namespace std;

vector<int> finalPrices(vector<int>& prices) {
    for(int i=0;i<prices.size()-1;i++) {
        for(int j=i+1;j<prices.size();j++) {
            if(prices[i] >= prices[j]) {
                prices[i] -= prices[j];
                break;
            }
        }
    }
    return prices;
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
    vector<int> ans = finalPrices(prices);
    for(int i=0;i<ans.size();i++) {
        cout << ans[i] << " ";
    }
}