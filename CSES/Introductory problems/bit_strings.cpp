#include<iostream>
#include<cmath>
using namespace std;
#define ll long long

ll MOD = 1e9 + 7;

int main() {
    ll n;
    cin >> n;
    ll bitStrings = 1;
    for(ll i=1;i<=n;i++) {
        bitStrings *= 2;
        bitStrings %= MOD;
    }
    cout << bitStrings;
}