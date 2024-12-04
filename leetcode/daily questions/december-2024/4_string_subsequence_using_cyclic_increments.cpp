#include<iostream>
#include<string>
using namespace std;

bool canMakeSubsequence(string str1, string str2) {
    int targetIndex = 0, targetLength = str2.length();
    for(char currChar : str1) {
        if(targetIndex < targetLength && (str2[targetIndex] - currChar + 26) % 26 <= 1) {
            targetIndex++;
        }
    }
    return targetLength == targetIndex;
}

int main() {
    string str1, str2;
    cin >> str1 >> str2;
    cout << canMakeSubsequence(str1, str2);
}