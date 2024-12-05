#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;

int romanToInt(string s) {
    unordered_map<char, int> roman {
        {'I',1},
        {'V',5},
        {'X',10},
        {'L',50},
        {'C',100},
        {'D',500},
        {'M',1000}
    };
    int res = 0;
    for(int i=0;i<s.length()-1;i++) {
        if(roman[s[i]] >= roman[s[i+1]])
            res += roman[s[i]];
        else if(roman[s[i]] < roman[s[i+1]])
            res -= roman[s[i]];
    }
    int n = s.length();
    return res + roman[s[n-1]];
}

int main() {
    string s;
    cin >> s;
    cout << romanToInt(s);
}