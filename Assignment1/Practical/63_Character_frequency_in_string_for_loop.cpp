#include <iostream>
#include <map>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    map<char, int> freq;
    for (int i = 0; i < str.length(); i++) {
        freq[str[i]]++;
    }

    cout << "Character frequencies: " << endl;
    for (auto &pair : freq) {
        cout << pair.first << ": " << pair.second << endl;
    }

    return 0;
}
