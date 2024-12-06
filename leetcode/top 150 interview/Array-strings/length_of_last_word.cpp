#include<iostream>
#include<string>
using namespace std;

int lengthOfLastWord(string s) {
    int count = 0;
    int start = 0;
    for(int i = s.length()-1;i>=0;i--) {
        if(s[i] != ' ')
            start = 1;
        if(start == 1) {
            if(s[i] != ' ')
                count++;
            else break;
        }
    }
    return count;
}

int main() {
    string s;
    getline(cin , s);
    cout << lengthOfLastWord(s);
}