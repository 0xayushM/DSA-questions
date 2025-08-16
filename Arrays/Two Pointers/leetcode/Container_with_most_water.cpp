#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int volume = INT_MIN, left = 0, right = height.size()-1;
        while(left < right) {
            int temp = min(height[left], height[right]) * (right-left);
            volume = max(volume, temp);
            if(height[left] < height[right]) left++;
            else right--;
        }
        return volume;
    }
};