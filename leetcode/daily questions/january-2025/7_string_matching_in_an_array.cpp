#include<iostream>
#include<string>
#include<vector>
#include<set>
using namespace std;

vector<string> stringMatching(vector<string>& words) {
    set<string> word;
    for(int i=0;i<words.size();i++) {
        for(int j=0;j<words.size();j++) {
            if(i!=j && words[i].find(words[j]) != string::npos)
                word.insert(words[j]);
        }
    }
    vector<string> ans;
    for(auto x : word) {
        ans.push_back(x);
    }
    return ans;
}

int main() {
    int n;
    cin >> n;
    vector<string> words(n,"");
    for(int i=0;i<n;i++) {
        cin >> words[i];
    }
    vector<string> ans = stringMatching(words);
}