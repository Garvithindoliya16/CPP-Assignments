#include <iostream>
using namespace std;

// Function to find the maximum of two numbers
int maximum(int a, int b) {
    return (a > b) ? a : b;
}

// Overloaded function to find the maximum of three numbers
int maximum(int a, int b, int c) {
    return (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
}

int main() {
    int num1, num2, num3;

    // Finding max of two numbers
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "Maximum of two numbers: " << maximum(num1, num2) << endl;

    // Finding max of three numbers
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;
    cout << "Maximum of three numbers: " << maximum(num1, num2, num3) << endl;

    return 0;
}
