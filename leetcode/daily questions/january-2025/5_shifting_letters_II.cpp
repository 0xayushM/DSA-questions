#include<iostream>
#include<vector>
#include<string>
using namespace std;

string shiftingLetters(string s, vector<vector<int>>& shifts) {
    int n = s.length();
    vector<int> prefixSum(n+1,0);
    for(auto x: shifts) {
        int start = x[0], end = x[1], direction = x[2];
        if(direction == 1) {
            prefixSum[start]++;
            prefixSum[end+1]--;
        } else {
            prefixSum[start]--;
            prefixSum[end+1]++;
        }
    }
    for(int i=1;i<n;i++) {
        prefixSum[i] += prefixSum[i-1];
    }
    for(int i=0;i<n;i++) {
        int netShift = (prefixSum[i] % 26 + 26) % 26;
        s[i] = 'a' + (s[i] + netShift - 'a') % 26;
    }
    return s;
}

int main() {
    string s;
    cin >> s;
    int n;
    cin >> n;
    vector<vector<int>> shifts(n, vector<int>(3));
    for(int i=0;i<n;i++) {
        int a,b,c;
        cin >> a >> b >> c;
        shifts[i][0] = a;
        shifts[i][1] = b;
        shifts[i][2] = c;
    }
    cout << shiftingLetters(s,shifts);
}