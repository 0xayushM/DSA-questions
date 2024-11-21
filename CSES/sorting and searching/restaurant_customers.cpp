#include<iostream>
#include<map>
using namespace std;
#define ll long long

int main() {
    ll n;
    cin >> n;
    map<int,int> multi;
    for(ll i=0;i<n;i++) {
        ll a,b;
        cin >> a >> b;
        multi.insert(make_pair(a,b));
    }
    int customers = 1;
    auto value = multi.begin();
    auto key = ++multi.begin();
    cout << value->second << " " << key->first;
    // for(auto& x: multi) {
    //     if()
    // } 
}