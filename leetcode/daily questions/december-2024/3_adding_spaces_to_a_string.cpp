#include<iostream>
#include<string>
#include<vector>
#include<sstream>
using namespace std;

string addSpaces(string s, vector<int>& spaces) {
    string result(s.length() + spaces.size(), ' ');
    int index = 0;
    for(int i=0;i<s.length();i++) {
        if(index < spaces.size() && s[i] == spaces[index]) {
            result[i+index] = ' ';
            index++;
        } 
        result[i+index] = s[i];
    }
    return result;
}

int main() {
    string s;
    cin >> s;
    vector<int> spaces;
    int n;
    cin >> n;
    for(int i=0;i<n;i++) {
        int r;
        cin >> r;
        spaces.push_back(r);
    }
    cout << addSpaces(s, spaces);
}