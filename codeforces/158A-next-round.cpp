#include<iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int arr[n];
    int comp;
    for(int i=0;i<n;i++) {
        int r;
        cin >> r;
        arr[i] = r;
    }
    comp = arr[k-1];
    int count=0;
    for(int i=0;i<n;i++) {
        if(arr[i] >= comp && arr[i] != 0)
            count++;
    }
    cout << count;
}