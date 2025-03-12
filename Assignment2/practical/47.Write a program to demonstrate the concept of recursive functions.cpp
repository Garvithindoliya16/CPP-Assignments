#include <iostream>
using namespace std;

// Recursive function to find the nth Fibonacci number
int fibonacci(int n) {
    if (n == 0)  // Base case: Fibonacci(0) = 0
        return 0;
    else if (n == 1)  // Base case: Fibonacci(1) = 1
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);  // Recursive call
}

int main() {
    int num;
    
    // Taking user input
    cout << "Enter the number of terms: ";
    cin >> num;

    // Display Fibonacci sequence
    cout << "Fibonacci Series: ";
    for (int i = 0; i < num; i++) {
        cout << fibonacci(i) << " ";
    }
    cout << endl;

    return 0;
}
