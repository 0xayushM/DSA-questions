#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;

int minimumLength(string s) {
    unordered_map<char,int> charCount;
    for(auto& x: s) {
        charCount[x]++;
    }
    int count=0;
    for(auto& x : charCount ) {
        if(x.second % 2 == 0) count+=2;
        else count+=1;
    }
    return count;
}

int main() {
    string s;
    cin >> s;
    cout << minimumLength(s);
}