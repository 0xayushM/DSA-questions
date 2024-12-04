#include<iostream>
using namespace std;
#define ll long long

ll noOfWays(ll n) {
    ll total = (n*n*((n*n) - 1))/2;
    ll waysToAttack = 4 * (n-1) * (n-2);
    return total - waysToAttack;
}

int main() {
     ll n;
     cin >> n;
     for(ll i = 1; i<=n;i++) {
        cout << noOfWays(i) << "\n";
     }
     return 0;
}