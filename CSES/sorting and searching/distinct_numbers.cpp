#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll n;
    cin >> n;
    set<int> input;
    for(ll i=0;i<n;i++) {
        ll r;
        cin >> r;
        input.insert(r);
    }
    cout << input.size();
}