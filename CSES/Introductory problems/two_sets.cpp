#include<iostream>
#include<vector>
using namespace std;
#define ll long long

void twoSets(ll n) {
    ll totalSum = (n*(n+1))/2;
    if(totalSum&1) 
        cout << "NO\n";
    else {
        cout << "YES\n";
        vector<ll> set1, set2;
        vector<ll> count(n+1,0);
        ll set1Sum = 0;
        ll maxElement = n;
        ll halfSum = totalSum/2;
        while(set1Sum < halfSum) {
            ll remainingSum = halfSum - set1Sum;
            if(remainingSum > maxElement) {
                set1.push_back(maxElement);
                count[maxElement] = 1;
                set1Sum += maxElement;
                maxElement--;
            } else {
                set1.push_back(remainingSum);
                count[remainingSum] = 1;
                set1Sum = halfSum;
            }
        }
        for(ll x=1;x<=n;x++) {
            if(count[x] == 0) {
                set2.push_back(x);
            }
        }
        cout << set1.size() << "\n";
        for(ll x : set1) {
            cout << x << " ";
        }
        cout << "\n" << set2.size() << "\n";
        for(ll x : set2) {
            cout << x << " ";
        }
    }
}
 
int main() {
    ll n;
    cin >> n;
    twoSets(n);
}