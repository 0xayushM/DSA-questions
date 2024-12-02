#include <iostream>
#include <vector>
#include <sstream>
#include <string>

using namespace std;

int isPrefixOfWord(string sentence, string searchWord) {
        stringstream stream(sentence);
        string word;
        int index = 1;
        while(stream >> word) {
            if(word.find(searchWord) == 0) {
                return index;
            }
            index++;
        }
        return -1;
}

int main()
{
    string sentence = "";
    string searchWord = "";
    getline(cin, sentence);
    getline(cin, searchWord);
    cout << isPrefixOfWord(sentence, searchWord);
}