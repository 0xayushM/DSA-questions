#include<iostream>
#include<vector>
using namespace std;
#define ll long long

int main() {
    ll n;
    cin >> n;
    vector<ll> ans;
    while(n--) {
        ll i,j;
        cin >> i >> j;
        ll value;
        if(i>=j) {
            if(i&2) 
                value = ((i-1)*(i-1)) + j;
            else value = (i*i) - j + 1;
        } else if(i<j) {
            if(j&2) 
                value = (j*j) - i + 1;
            else value = ((j-1)*(j-1)) + i;
        }
        ans.push_back(value);
    }
    for(auto x : ans) {
        cout << x << endl;
    }
    return 0;
}