#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

int longestMonotonicSubarray(vector<int>& nums) {
    int maxInc = 1, maxDec = 1, inc = 1, dec = 1;
    for(int i=1;i<nums.size();i++) {
        if(nums[i-1] < nums[i]) {
            inc++;
        } else {
            maxInc = max(maxInc, inc);
            inc = 1;
        }
        if(nums[i-1] > nums[i]) {
            dec++;
        } else {
            maxDec = max(maxDec, dec);
            dec = 1;
        }
    }
    maxInc = max(maxInc,inc);
    maxDec = max(maxDec,dec);
    return max(maxDec,maxInc);
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i=0;i<n;i++)
        cin >> nums[i];
    cout << longestMonotonicSubarray(nums);
}