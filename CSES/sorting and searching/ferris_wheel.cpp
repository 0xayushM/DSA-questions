#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll n,weight;
    cin >> n >> weight;
    vector<ll> kids;
    for(ll i=0;i<n;i++) {
        ll r;
        cin >> r;
        kids.push_back(r);
    }
    sort(kids.begin(), kids.end());
    ll i=0,j=n-1,count=0;
    while(i<=j) {
        if(i == j) {
            count++;
            break;
        } else if(kids[i] + kids[j] > weight) {
            count++;
            j--;
        } else {
            count++;
            i++;
            j--;
        }
    }
    cout << count;
}