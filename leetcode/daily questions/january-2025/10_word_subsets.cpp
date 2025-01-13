#include<iostream>
#include<vector>
#include<string>
using namespace std;

vector<string> wordSubsets(vector<string>& mainWords, vector<string>& requiredWords) {
    
}

int main() {
    int n,m;
    cin >> n;
    vector<string> mainWords;
    for(int i=0;i<n;i++) {
        string r;
        cin >> r;
        mainWords.push_back(r);
    }
    cin >> m;
    vector<string> requiredWords;
    for(int i=0;i<m;i++) {
        string r;
        cin >> r;
        requiredWords.push_back(r);
    }
    vector<string> ans = wordSubsets(mainWords, requiredWords);
}
