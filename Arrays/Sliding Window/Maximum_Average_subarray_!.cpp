#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum = 0, maxAvg = INT_MIN;
        for(int i=0;i<nums.size();i++) {
            sum += nums[i];
            if(i >= k-1) {
                double avg = sum/k;
                maxAvg = max(maxAvg, avg);
                sum -= nums[i-k+1];
            }
        }
        return maxAvg;
    }
};