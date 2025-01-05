#include<iostream>
#include<vector>
#include<string>
using namespace std;

string shiftingLetters(string s, vector<vector<int>>& shifts) {
    for(auto x: shifts) {
        for(int i=x[0];i<=x[1];i++) {
            if(x[2] == 0) {
                if(s.at(i) == 'a')
                    s.at(i) = 'z';
                else s.at(i) -= 1;
            } else if(x[2] == 1) {
                if(s.at(i) == 'z')
                    s.at(i) = 'a';
                else s.at(i) += 1;
            }
        }
    }
    return s;
}

int main() {
    string s;
    cin >> s;
    int n;
    cin >> n;
    vector<vector<int>> shifts(n, vector<int>(3));
    for(int i=0;i<n;i++) {
        int a,b,c;
        cin >> a >> b >> c;
        shifts[i][0] = a;
        shifts[i][1] = b;
        shifts[i][2] = c;
    }
    cout << shiftingLetters(s,shifts);
}