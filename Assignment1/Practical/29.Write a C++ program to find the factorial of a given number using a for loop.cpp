#include <iostream>
using namespace std;

int main() {
    int num;
    unsigned long long factorial = 1; // Using unsigned long long to handle large values

    // Taking user input
    cout << "Enter a number to find its factorial: ";
    cin >> num;

    // Factorial of 0 and 1 is always 1
    if (num < 0) {
        cout << "Factorial is not defined for negative numbers!" << endl;
    } else {
        // Using a for loop to calculate factorial
        for (int i = 1; i <= num; i++) {
            factorial *= i;
        }

        // Displaying the result
        cout << "Factorial of " << num << " is: " << factorial << endl;
    }

    return 0;
}
