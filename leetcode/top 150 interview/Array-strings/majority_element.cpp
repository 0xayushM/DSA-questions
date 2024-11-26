#include<iostream>
#include<unordered_map>
#include<cmath>
#include<vector>
#include<sstream>
#include<string>
using namespace std;

int majorityElement(vector<int>& nums) {
    unordered_map<int,int> mp;
    for(int num : nums) {
        mp[num]++;
    }
    int max = INT_MIN, ans = 0;
    for(auto& x : mp) {
        if(x.second > max) {
            max = x.second;
            ans = x.first;
        }
    }
    return ans;
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
    cout << majorityElement(nums);
}