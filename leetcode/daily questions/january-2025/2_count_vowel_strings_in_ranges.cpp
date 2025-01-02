#include<iostream>
#include<vector>
#include<string>
using namespace std;

bool checkVowel(char s) {
    if(s == 'a' || s == 'e' || s == 'i' || s == 'o' || s == 'u')
        return true;
    else return false;
}

vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
    int n = words.size();
    vector<int> prefixSum;
    for(int i=0;i<=n;i++) {
        prefixSum.push_back(0);
    }
    int count = 0;
    for(int i=0;i<n;i++) {
        if(checkVowel(words[i].at(0)) && checkVowel(words[i].at(words[i].length()-1))) {
            count++;
        }
        prefixSum[i+1] = count;
    }
    for(int i=0;i<prefixSum.size();i++)
        cout << prefixSum[i] << " ";
    cout << "\n";
    vector<int> ans;
    for(vector<int> x : queries) {
        int diff = prefixSum[x[1]+1] - prefixSum[x[0]];
        ans.push_back(diff);
    }

    return ans;
}

int main() {
    int n;
    cin >> n;
    vector<string> words;
    for(int i=0;i<n;i++) {
        string str;
        cin >> str;
        words.push_back(str);
    }
    int size;
    cin >> size;
    vector<vector<int>> queries(size, vector<int>(2));
    for(int i=0;i<size;i++) {
        int a,b;
        cin >> a >> b;
        queries[i][0] = a;
        queries[i][1] = b;
    }
    vector<int> ans = vowelStrings(words, queries);
    for(int x : ans) {
        cout << x << " ";
    }
}