#include <iostream>
using namespace std;

// Function pointer type definition
typedef int (*Operation)(int, int);

// Sample functions to perform operations
int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

// Function that takes a function pointer (callback function)
void executeOperation(int x, int y, Operation op) {
    cout << "Result: " << op(x, y) << endl;
}

int main() {
    int a = 10, b = 5;
    
    // Using function pointers as callbacks
    cout << "Addition: ";
    executeOperation(a, b, add);
    
    cout << "Subtraction: ";
    executeOperation(a, b, subtract);
    
    cout << "Multiplication: ";
    executeOperation(a, b, multiply);
    
    return 0;
}
