#include<iostream>
#include<vector>
using namespace std;

bool check(vector<int>& nums) {
    int n = nums.size();
    int count = 0;
    for(int i=1;i<n;i++) {
        if(nums[i-1] > nums[i])
            count++;
    }
    if(nums[0] < nums[n-1])
        count++;
    return count<=1;
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i=0;i<n;i++)
        cin >> nums[i];
    cout << boolalpha << check(nums);
}