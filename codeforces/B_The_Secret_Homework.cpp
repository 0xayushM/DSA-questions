#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        unsigned long long n;
        cin >> n;
        vector<unsigned long long> xs;
        unsigned long long p10 = 10; // 10^1
        for (int k = 1; k <= 18 && p10 <= n; ++k) {
            unsigned long long denom = p10 + 1; // 1 + 10^k
            if (n % denom == 0) {
                xs.push_back(n / denom);
            }
            if (k < 18) p10 *= 10;
        }
        if (xs.empty()) {
            cout << 0 << "\n";
        } else {
            sort(xs.begin(), xs.end());
            xs.erase(unique(xs.begin(), xs.end()), xs.end());
            cout << xs.size() << "\n";
            for (size_t i = 0; i < xs.size(); ++i) {
                if (i) cout << ' ';
                cout << xs[i];
            }
            cout << "\n";
        }
    }
    return 0;
}
