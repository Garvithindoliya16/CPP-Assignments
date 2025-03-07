#include <iostream>
using namespace std;

int main() {
    int num, i = 1;

    // Taking user input
    cout << "Enter a number to print its multiplication table: ";
    cin >> num;

    // Using a do-while loop to print the multiplication table
    do {
        cout << num << " x " << i << " = " << num * i << endl;
        i++; // Increment counter
    } while (i <= 10); // Loop runs until i reaches 10

    return 0;
}
