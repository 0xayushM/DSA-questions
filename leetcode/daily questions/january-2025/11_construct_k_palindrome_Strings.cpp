#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;

bool canConstruct(string s, int k) {
    unordered_map<char, int> letters;
    if(s.length() < k) return false;
    for(auto& x : s) {
        letters[x]++;
    }
    int countOdd = 0;
    for(auto& x : letters) {
        if(x.second % 2 != 0) 
            countOdd++;
    }
    if(countOdd > k) return false;
    else return true;
}

int main() {
    string s;
    cin >> s;
    int k;
    cin >> k;
    cout << boolalpha << canConstruct(s,k);
}