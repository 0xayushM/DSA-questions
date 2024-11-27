#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;
#define ll long long

int main() {
    ll n,x;
    cin >> n >> x;
    unordered_map<ll,ll> num;
    for(ll i=0;i<n;i++) {
        int r;
        cin >> r;
        num[r] = i;
    }
   
    sort(num.begin(), num.end());

    for(auto& a : num) {
        cout << a.first << " " << a.second << endl;
    }

    // ll i=0,j=n-1,sum=0, maxIndexStart = 0 , maxIndexEnd = 0;
    // while(i<j) {
    //     sum = num[i] + num[j];
    //     if(sum > x) {
    //         j--;
    //     } else if(sum < x) {
    //         i++;
    //     } else {
    //         maxIndexStart = i+1;
    //         maxIndexEnd = j+1;
    //         break;
    //     }
    // }
    // cout << maxIndexStart << " " << maxIndexEnd;
}