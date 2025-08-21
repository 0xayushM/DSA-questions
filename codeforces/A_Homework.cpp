#include<iostream>
#include<string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n1,n2,n3;
        string a,b,c;
        cin >> n1 >> a >> n2 >> b >> c;
        n3 = n2; 
        int i=0;
        for(char ch : c) {
            if(ch == 'D') {
                a = a + b.at(i++);
            } else if(ch == 'V') {
                a = b.at(i++) + a;
            }
        }
        cout << a << endl;
    }
    return 0;
}