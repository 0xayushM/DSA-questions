#include <iostream>
#include <vector>
#include <sstream>
#include <string>
using namespace std;

bool checkIfExist(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr.size(); j++)
        {
            if (arr[i] == 2 * arr[j] && i != j)
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    vector<int> nums;
    string str;
    getline(cin, str);
    stringstream ss(str);
    int number;
    while (ss > number)
    {
        nums.push_back(number);
    }
    cout << checkIfExist(nums);
}