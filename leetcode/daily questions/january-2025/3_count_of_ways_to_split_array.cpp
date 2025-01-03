#include<iostream>
#include<vector>
using namespace std;

int waysToSplitArray(vector<int>& nums) {
    int count = 0;
    int n = nums.size();
    long long totalSum = 0;
    for(int i=1;i<n;i++) {
        totalSum+=nums[i];
    }
    long long sum = 0;
    for(int i=0;i<n-1;i++) {
        sum += nums[i];
        totalSum -= nums[i];
        if(sum >= totalSum) {
            count++;
        } else break;
    }
    return count;
}

int main() {
    int n;
    cin >> n;
    vector<int> nums;
    for(int i=0;i<n;i++) {
        int r;
        cin >> r;
        nums.push_back(r);
    }
    cout << waysToSplitArray(nums);
}