#include <iostream>
using namespace std;

// Function to increase by 10
void incrementBy10(int *a) {
    int temp = *a+10;
    *a = temp;
}

int main() {
    int x;
    cout << "Enter number: ";
    cin >> x;

    cout << "Before function call: x = " << x <<endl;

    // Calling increment function
    incrementBy10(&x);

    cout << "After function call: x = " << x <<endl;

    return 0;
}
