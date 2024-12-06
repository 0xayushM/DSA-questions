#include<iostream>
#include<string>
using namespace std;

bool canChange(string start, string target) {
    int i=0, j=0, n = start.length();
    while(i < n || j < n) {

        while(i < n && start[i] == '_')
            i++;

        while(j < n && target[j] == '_')
            j++;

        if(i == n || j == n)
            break;

        if(start[i] != target[j])
            return false;

        if(start[i] == 'L')
            if(i < j)
                return false;
        
        if(start[i] == 'R')
            if(i > j)
                return false;
        
        i++;
        j++;
    }
    return i == n && j == n;
}

int main() {
    string start, target;
    cin >> start;
    cin >> target;
    if(start.length() == target.length())
        cout << canChange(start,target);
    return 0;
    
}