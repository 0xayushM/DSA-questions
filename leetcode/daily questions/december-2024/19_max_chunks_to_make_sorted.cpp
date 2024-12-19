#include<iostream>
#include<vector>
using namespace std;

int maxChunksToSorted(vector<int>& arr) {
    const int n = arr.size();
    int count = 0, diff = 0;
    for(int i=0;i<n;i++) {
        diff+=(arr[i] - i);
        count+=(diff==0);
    }
    return count;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr;
    for(int i=0;i<n;i++) {
        int r;
        cin >> r;
        arr.push_back(r);
    }
    cout << maxChunksToSorted(arr);
}