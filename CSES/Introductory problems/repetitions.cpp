#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int max_count = 1, count = 1;
    for(int i=0;i<s.length()-1;i++) {
        if(s[i+1] == s[i]) {
            count++;
        }
        else {
            count = 1;
        }
        max_count = max(max_count, count);
    }
    cout << max_count;
    return 0;
}