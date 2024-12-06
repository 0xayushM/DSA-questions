#include<iostream>
#include<vector>
#include<unordered_set>
#include<sstream>
#include<string>
using namespace std;

int maxCount(vector<int>& banned, int n, int maxSum) {
    unordered_set<int> occurence(banned.begin(), banned.end());
    int count = 0;
    int sum = 0;
    for(int i=1;i<=n;i++) {
        if(occurence.count(i))
            continue;
        sum+=i;
        if(sum > maxSum)
            break;
        count++;
    }
    return count;
}

int main() {
    vector<int> banned;
    string s;
    getline(cin, s);
    stringstream ss(s);
    int number;
    while(ss >> number) {
        banned.push_back(number);
    }
    int n, maxSum;
    cin >> n;
    cin >> maxSum;
    cout << maxCount(banned, n, maxSum);
}