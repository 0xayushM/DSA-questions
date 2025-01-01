#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int maxScore(string s) {
    int zeroes = 0, ones = 0;
    for(int i=0;i<s.length();i++) {
        if(s[i] == '1')
            ones++;
    }
    int maxScore = 0;
    for(int i=0;i<s.length()-1;i++) {
        if(s[i] == '0')
            zeroes++;
        else ones--;
        maxScore = max(maxScore, ones+zeroes);
    }
    return maxScore;
}

int main() {
    string s;
    cin >> s;
    cout << maxScore(s);
}