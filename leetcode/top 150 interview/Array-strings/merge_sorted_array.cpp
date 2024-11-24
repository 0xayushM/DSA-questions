// #include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
#define ll long long

void merge(vector<int>& nums1, int n, vector<int>& nums2, int m) {
    int i = n-1;
    int j = m-1;
    int k = m+n-1;
    while(j>=0) {
        if(i>=0 && nums1[i] > nums2[j])
            nums1[k--] = nums1[i--];
        else nums1[k--] = nums2[j--];
    }
}

int main () {
    int n,m;
    cin >> n >> m;
    vector<int> nums1;
    vector<int> nums2;
    for(int i=0;i<n;i++) {
        int r;
        cin >> r;
        nums1.push_back(r);
    }
    for(int i=0;i<m;i++) {
        int r;
        cin >> r;
        nums2.push_back(r);
    }
    merge(nums1, n, nums2, m);

    for(int i=0;i<n+m;i++) {
        cout << nums1[i] << " ";
    }
}