#include<iostream>
using namespace std;
#define ll long long

int main() {
    ll n;
    cin >> n;
    ll sum_of_n = n*(n+1)/2;
    ll sum_of_inputs = 0;
    for(int i=0;i<n-1;i++) {
        ll r;
        cin >> r;
        sum_of_inputs+=r;
    }
    cout << sum_of_n - sum_of_inputs;
    return 0;
}