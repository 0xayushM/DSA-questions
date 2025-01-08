#include<iostream>
#include<vector>
#include<string>
using namespace std;

bool isPrefixAndSuffix(string word1, string word2) {
    int left = word2.find(word1);
    int right = word2.rfind(word1) + word1.size();
    if(left == 0 && right == word2.size())
        return true;
    else return false;
}
int countPrefixSuffixPairs(vector<string>& words) {
    int count = 0;
    for(int i=0;i<words.size();i++) {
        for(int j=i+1;j<words.size();j++) {
            if(isPrefixAndSuffix(words[i],words[j]))
                count++;
        }
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
    cout << countPrefixSuffixPairs(words);
}