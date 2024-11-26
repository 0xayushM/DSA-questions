#include<vector>
#include<iostream>
#include<string>
#include<sstream>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    int index = 1;
    if(nums.size() <= 2) return nums.size();
    for(int i=2;i<nums.size();i++) {
        if(nums[index-1] != nums[i]) {
            nums[++index] = nums[i];
        }
    }
    return index+1;
}

int main() {
    vector<int> nums;
    string s;
    getline(cin,s);
    stringstream ss(s);
    int number;
    while(ss >> number) {
        nums.push_back(number);
    }
    cout << removeDuplicates(nums);
}