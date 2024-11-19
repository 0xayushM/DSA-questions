#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll n,m,k;
    cin >> n >> m >> k;
    vector<ll> applicants;
    vector<ll> size;
    for(int i=0;i<n;i++) {
        ll r;
        cin >> r;
        applicants.push_back(r);
    }
    for(int i=0;i<m;i++) {
        ll r;
        cin >> r;
        size.push_back(r);
    }
    ll count = 0;
    sort(applicants.begin(), applicants.end());
    sort(size.begin(), size.end());
    ll i=0,j=0;
    while(i < n && j < m) {
        ll min = applicants[i] - k;
        ll max = applicants[i] + k;
        if(size[j] >= min && size[j] <= max) {
            count++;
            i++;
            j++;
        } else if(applicants[i] < size[j]) {
            i++;
        } else j++;
    }
    cout << count;
}