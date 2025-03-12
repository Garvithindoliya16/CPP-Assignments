#include <iostream>
using namespace std;

// Function to print an integer
void print(int num) {
    cout << "Integer: " << num << endl;
}

// Overloaded function to print a float
void print(float num) {
    cout << "Float: " << num << endl;
}

// Overloaded function to print a string
void print(string text) {
    cout << "String: " << text << endl;
}

int main() {
    int intValue;
    float floatValue;
    string strValue;

    // Taking input for different data types
    cout << "Enter an integer: ";
    cin >> intValue;
    cout << "Enter a float: ";
    cin >> floatValue;
    cout << "Enter a string: ";
    cin.ignore(); // To clear the newline character from previous input
    getline(cin, strValue);

    // Calling overloaded functions
    print(intValue);
    print(floatValue);
    print(strValue);

    return 0;
}
