#include<iostream>
#include<vector>
using namespace std;

void reverse(vector<int>& nums, int start, int end) {
    while(start < end) {
        int temp = nums[start];
        nums[start] = nums[end];
        nums[end] = temp;
        start++;
        end--;
    }
}

void rotateArray(vector<int>& nums, int k) {
    k=k%nums.size();
    reverse(nums, 0, nums.size());
    reverse(nums, 0, k);
    reverse(nums, k, nums.size());
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
    int k;
    cin >> k;
    rotateArray(nums, k);
    for(int i : nums) {
        cout << i << " ";
    }
}