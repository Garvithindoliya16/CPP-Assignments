#include <iostream>
using namespace std;

int main() {
    int i = 1, sum = 0; // Initialize counter and sum

    while (i <= 50) { // Loop runs from 1 to 50
        sum += i; // Add current number to sum
        i++; // Increment counter
    }

    cout << "Sum of the first 50 natural numbers: " << sum << endl;

    return 0;
}
