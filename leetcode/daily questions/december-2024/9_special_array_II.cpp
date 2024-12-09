#include<iostream>
#include<vector>
using namespace std;

vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& queries) {
    vector<int> parities;
    for(int i=0;i<nums.size()-1;i++) {
        if((nums[i]&1 && nums[i+1]&1) || !(nums[i]&1 && nums[i+1]&1))
            parities.push_back(i);
    }
    vector<bool> ans;
    for(int i=0;i<queries.size();i++) {
        bool flag = true;
        int start = queries[i][0];
        int end = queries[i][1];
        for(auto it: parities) {
            if(it >= end) {
                ans.push_back(true);
                flag = true;
                break;
            }
            if(it < end && it >= start) {
                ans.push_back(false);
                flag = true;
                break;
            }
        }
        if(!flag) {
            ans.push_back(true);
        }
    }
    return ans;
} 

int main() {
    vector<int> nums;
    vector<vector<int>> queries;
    int nums_size, queries_size;
    cin >> nums_size >> queries_size;
    for(int i=0;i<nums_size;i++) {
        int r;
        cin >> r;
        nums.push_back(r);
    }
    for(int i=0;i<queries_size;i++) {
        vector<int> temp;
        for(int j=0;j<2;j++) {
            int a;
            cin >> a;
            temp.push_back(a);
        }
        queries.push_back(temp);
        temp.clear();
    }
    vector<bool> ans = isArraySpecial(nums,queries);
    for(int i=0;i<ans.size();i++) {
        cout << ans[i] << "\n";
    }
}