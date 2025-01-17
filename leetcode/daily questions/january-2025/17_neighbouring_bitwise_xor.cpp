#include<iostream>
#include<vector>
using namespace std;

bool doesValidArrayExist(vector<int>& derived) {
    int totalXor = derived[0];
    for(int i=1;i<derived.size();i++) {
        totalXor = totalXor^derived[i];
    }
    return totalXor == 0;
}

int main() {
    int n;
    cin >> n;
    vector<int> derived;
    for(int i=0;i<n;i++) {
        int r;
        cin >> r;
        derived.push_back(r);
    }
    cout << boolalpha << doesValidArrayExist(derived);
}