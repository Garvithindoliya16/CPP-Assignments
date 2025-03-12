#include <iostream>
using namespace std;

// Function definitions for basic arithmetic operations
int add(int a, int b) { return a + b; }
int subtract(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }
int divide(int a, int b) { return (b != 0) ? (a / b) : 0; } // Avoid division by zero

int main() {
    // Array of function pointers
    int (*operations[4])(int, int) = {add, subtract, multiply, divide};

    int choice, num1, num2;

    // Display menu
    cout << "Select an operation:\n";
    cout << "0: Addition\n1: Subtraction\n2: Multiplication\n3: Division\n";
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice < 0 || choice > 3) {
        cout << "Invalid choice!" << endl;
        return 1; // Exit program
    }

    // Taking input for two numbers
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Perform operation using function pointer array
    cout << "Result: " << operations[choice](num1, num2) << endl;

    return 0;
}
