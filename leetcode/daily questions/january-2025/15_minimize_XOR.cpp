#include<iostream>
using namespace std;

int countBits(int num) {
    int count = 0;
    while(num) {
        count+= num&1;
        num >>= 1;
    }
    return count;
}
int minimizeXor(int num1, int num2) {
    int bits = countBits(num2);
    int result = 0;
    for(int i=31;i>=0 && bits > 0 ; i--) {
        if(num1 & (1 << i)) {
            result |= (1 << i);
            bits--;
        }
    }
    for(int i=0;i<32 && bits > 0;i++) {
        if(!(result & (1 << i))) {
            result |= (1<<i);
            bits--;
        }
    }
    return result;
}

int main() {
    int num1,num2;
    cin >> num1 >> num2;
    cout << minimizeXor(num1,num2);
}