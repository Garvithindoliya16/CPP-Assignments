#include <iostream>
using namespace std;

int main() {
    int num = 65; // ASCII value of 'A'
    
    // Using reinterpret_cast to convert int* to char*
    char* charPtr = reinterpret_cast<char*>(&num);
    
    cout << "Integer value: " << num << endl;
    cout << "Character representation: " << *charPtr << endl;

    return 0;
}
