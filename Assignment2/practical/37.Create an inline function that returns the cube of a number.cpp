#include <iostream>
using namespace std;

// Inline function to calculate cube
inline int cube(int num) {
    return num * num * num;
}

int main() {
    int x;
    cout << "Enter a number: ";
    cin >> x;

    cout << "Cube of " << x << " is: " << cube(x) << endl;

    return 0;
}
