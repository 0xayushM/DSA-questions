#include<iostream>
#include<vector>
using namespace std;

int maxAscendingSum(vector<int>& nums) {
    int sum = 0,maxSum=0,i=1;
    for(i=1;i<nums.size();i++) {
        if(nums[i-1] < nums[i]) {
            sum+=nums[i-1];
            cout << nums[i-1] << " ";
        }
        else {
            sum+=nums[i-1];
            cout << "\n" << sum << " ";
            maxSum = max(maxSum,sum);
            sum=0;
        }
    }
    sum+=nums[i-1];
    maxSum = max(maxSum,sum);
    return maxSum;
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i=0;i<n;i++) {
        cin >> nums[i];
    }
    cout << maxAscendingSum(nums);
}