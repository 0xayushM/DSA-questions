#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll n,m;
    cin >> n >> m;
    multiset<ll> prices;
    for(ll i=0;i<n;i++) {
        int r;
        cin >> r;
        prices.insert(r);
    }
    for(ll i=0;i<m;i++) {
        int r;
        cin >> r;
        auto price = prices.upper_bound(r);
        // if()
    }
}