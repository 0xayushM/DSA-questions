#include<iostream>
#include<string>
#include<vector>
using namespace std;

vector<int> minOperations(string s) {
    int n = s.length();
    vector<int> left(n,0), right(n,0), res(n,0);
    int count = (s[0] == '1' ? 1 : 0);
    for(int i=1;i<n;i++) {
        left[i] = left[i-1] + count;
        count += s[i] == '1' ? 1 : 0;
    }
    count = s[n-1] == '1' ? 1 : 0;
    for(int i=n-2;i>=0;i--) {
        right[i] = right[i+1] + count;
        count += s[i] == '1' ? 1 : 0;
    }
    for(int i=0;i<n;i++) {
        res[i] = left[i] + right[i];
    }
    return res;
}

int main() {
    string s;
    cin >> s;
    vector<int> ans = minOperations(s);
    for(int i=0;i<ans.size();i++) {
        cout << ans[i] << " ";
    }
}