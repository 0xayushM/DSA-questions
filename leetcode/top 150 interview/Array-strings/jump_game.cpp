#include<iostream>
#include<vector>
using namespace std;

bool canJump(vector<int>& nums) {
    int goal = nums.size()-1;
    for(int i=nums.size()-1;i>=0;i--) {
        if(i+nums[i] >= goal)
            goal = i;
    }
    return goal == 0;
}

int main() {
    int n;
    cin>> n;
    vector<int> nums;
    for(int i=0;i<n;i++) {
        int r;
        cin >> r;
        nums.push_back(r);
    }
    cout << boolalpha << canJump(nums);
}