#include<vector>
#include<algorithm>
#include<iostream>
#include<cmath>
using namespace std;
#define ll long long 

int main() {
    ll n;
    cin >> n;
    vector<ll> start;
    vector<ll> endTime;
    for(ll i=0;i<n;i++) {
        ll a,b;
        cin >> a >> b;
        start.push_back(a);
        endTime.push_back(b);
    }
    sort(start.begin(), endTime.end());
    sort(start.begin(), endTime.end());

    ll currentMovie = 0, maxMovies = 0;
    ll i=0,j=0;
    while( i<n && j<n) {
        if(start[i] <= endTime[j]) {
            currentMovie++;
            maxMovies = max(maxMovies, currentMovie);
            i++;
        } else {
            j++;
            currentMovie--;
        }
     }
     cout << maxMovies;
}