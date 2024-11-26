#include<iostream>
#include<vector>
#include<string>
#include<sstream>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    int val=0;
    for(int i=1;i<nums.size();i++) {
        if(nums[i] != nums[val]) {
            val++;
            nums[val] = nums[i];
        }
    }
    return val+1;
}

int main() {
    vector<int> nums;
    string s;
    getline(cin, s);
    stringstream ss(s);
    int number;
    while(ss >> number) {
        nums.push_back(number);
    }
    cout << removeDuplicates(nums);
}