#include<iostream>
#include<vector>
#include<string>
using namespace std;

int prefixCount(vector<string>& words, string pref) {
    int count = 0;
    for(int i=0;i<words.size();i++) {
        if(words[i].find(pref) == 0)
            count++;
    }
    return count;
}

int main() {
    int n;
    cin >> n;
    vector<string> words(n,"");
    for(int i=0;i<n;i++) {
        cin >> words[i];
    }
    string pref;
    cin >> pref;
    cout << prefixCount(words,pref);
}