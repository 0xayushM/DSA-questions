#include <iostream>
#include <vector>
using namespace std;

bool isArraySpecial(vector<int> &nums)
{
    for (int i = 0; i < nums.size() - 1; i++)
    {
        if (nums[i] % 2 == nums[i + 1] % 2)
            return false;
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i=0;i<n;i++) {
        cin >> nums[i];
    }
    cout << boolalpha << isArraySpecial(nums);
}