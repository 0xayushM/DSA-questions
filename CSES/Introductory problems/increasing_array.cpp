#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll n;
    cin >> n;
    vector<ll> vec;
    for(ll i=0;i<n;i++) {
        ll r;
        cin >> r;
        vec.push_back(r);
    }
    ll count = 0, lastMax = vec[0];
    for(ll i=1;i<n;i++) {
        if(lastMax > vec[i]) {
            count += lastMax - vec[i];
        }
        lastMax = max(lastMax, vec[i]);
    }
    cout << count;
}