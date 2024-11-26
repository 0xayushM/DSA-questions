#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;
#define ll long long

int main() {
    ll n;
    cin >> n;
    vector<ll> arr;
    vector<ll> dep;
    for(ll i=0;i<n;i++) {
        int a,b;
        cin >> a >> b;
        arr.push_back(a);
        dep.push_back(b);
    }

    sort(arr.begin(), arr.end());
    sort(dep.begin(), dep.end());

    int currentCustomer = 0, maxCustomer = 0, i = 0, j = 0;
    while(i < n && j < n) {
        if(arr[i] < dep[j]) {
            currentCustomer++;
            maxCustomer = max(maxCustomer, currentCustomer);
            i++;
        } else {
            j++;
            currentCustomer--;
        }
    }
    cout << maxCustomer << endl;
}