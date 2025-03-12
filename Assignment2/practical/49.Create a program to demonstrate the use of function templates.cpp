#include <iostream>
using namespace std;

// Function template to find the maximum of two values
template <typename T>
T findMax(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    // Testing with integers
    int int1 = 10, int2 = 20;
    cout << "Max of " << int1 << " and " << int2 << " is: " << findMax(int1, int2) << endl;

    // Testing with floating-point numbers
    double double1 = 5.5, double2 = 2.2;
    cout << "Max of " << double1 << " and " << double2 << " is: " << findMax(double1, double2) << endl;

    // Testing with characters
    char char1 = 'A', char2 = 'Z';
    cout << "Max of '" << char1 << "' and '" << char2 << "' is: " << findMax(char1, char2) << endl;

    return 0;
}
