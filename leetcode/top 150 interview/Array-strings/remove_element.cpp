#include<iostream>
#include<vector>
#include<string>
#include<sstream>
using namespace std;
#define ll long long

int removeElement(vector<int>& array, int val) {
    int index = 0;
    for(int i=0;i<array.size();i++) {
        if(array[i] != val) {
            array[index] = array[i];
            index++;
        }
    }
    for(int it : array) {
        cout << it << " ";
    }
    return index;
}

int main () {
    vector<int> array;
    string val;
    getline(cin, val);
    stringstream ss(val);
    int number;
    while(ss >> number) {
        array.push_back(number);
    }
    int num;
    cin >> num;
    int k = removeElement(array, num);
    cout << "\n" << k;
}