#include <iostream>
using namespace std;

// Inline function to calculate square
inline int square(int num) {
    return num * num;
}

int main() {
    int x;
    cout << "Enter a number: ";
    cin >> x;

    cout << "Square of " << x << " is: " << square(x) << endl;

    return 0;
}
