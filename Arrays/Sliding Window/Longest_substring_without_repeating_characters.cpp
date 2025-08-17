#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<int> freq;
        int right = 0, left = 0, maxCount = 0;
        while(right < s.length()) {
            if(!freq.contains(s.at(right))) {
                freq.insert(s.at(right));
                maxCount = max(maxCount, right - left + 1);
                right++;
            } else {
                freq.erase(s.at(left));
                left++;
            }
        }
        return maxCount;
    }
};