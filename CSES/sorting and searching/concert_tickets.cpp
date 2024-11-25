#include<iostream>
#include<vector>
#include<set>
using namespace std;
#define ll long long

int main() {
    ll n,m;
    cin >> n >> m;
    multiset<int> tickets;
    for(ll i=0;i<n;i++) {
        int price;
        cin >> price;
        tickets.insert(price);
    }
    vector<int> maxPrices;
    for(ll i=0;i<m;i++) {
        int price;
        cin >> price;
        maxPrices.push_back(price);
    }

    for(int price : maxPrices) {
        auto it = tickets.upper_bound(price); // finds the first ticket greater than price
        if(it == tickets.begin()) {
            cout << -1 << endl;
        } else {
            --it;
            cout << *it << endl;
            tickets.erase(it);
        }
    }
    return 0;
}