#include<iostream>
#include<vector>
using namespace std;

int minimum(vector<int>& nums) {
    int min = nums[0];
    for(int i=1;i<nums.size();i++) {
        if(min > nums[i])
            min = nums[i];
    }
    return min;
}

vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
    while(k--) {
        int min = minimum(nums);
        for(int i=0;i<nums.size();i++) {
            if(nums[i] == min) {
                nums[i] = nums[i]*multiplier;
                break;
            }
        }
    }
    return nums;
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
    int k,multiplier;
    cin >> k >> multiplier;
    vector<int> ans = getFinalState(nums, k, multiplier);
}