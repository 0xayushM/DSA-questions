#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int trap(vector<int>& height) {
        int volume = 0, n = height.size();
        vector<int> left(n), right(n);
        left[0] = height[0];
        right[n-1] = height[n-1];
        for(int i=1;i<n;i++) {
            left[i] = max(left[i-1], height[i]);
        }
        for(int i=n-1;i>0;i--) {
            right[i-1] = max(right[i], height[i-1]);
        }
        for(int i=0;i<n;i++) {
            volume += min(left[i],right[i]) - height[i];
        }
        return volume;
    }
};