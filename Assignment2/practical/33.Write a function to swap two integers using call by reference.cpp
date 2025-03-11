#include <iostream>
using namespace std;

// Function to swap two integers using call by reference
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;

    cout << "Before swapping: x = " << x << ", y = " << y << endl;

    // Calling swap function
    swap(x, y);

    cout << "After swapping: x = " << x << ", y = " << y << endl;

    return 0;
}
