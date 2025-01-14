#include<iostream>
#include<vector>
using namespace std;

vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
    int count = 0, n = A.size();
    vector<int> prefix(n+1,0);
    vector<int> ans;
    for(int i=0;i<A.size();i++) {
        if(++prefix[A[i]] == 2)
            count++;
        if(++prefix[B[i]] == 2)
            count++;
        ans.push_back(count);
    }
    return ans;
}

int main() {
    int n;
    cin >> n;
    vector<int> A;
    vector<int> B;
    for(int i=0;i<n;i++) {
        int r;
        cin >> r;
        A.push_back(r);
    }
    for(int i=0;i<n;i++) {
        int r;
        cin >> r;
        B.push_back(r);
    }
    vector<int> ans = findThePrefixCommonArray(A,B);
    for(int i=0;i<ans.size();i++)
        cout << ans[i] << " ";
}