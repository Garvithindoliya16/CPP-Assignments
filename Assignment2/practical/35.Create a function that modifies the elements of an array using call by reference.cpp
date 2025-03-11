#include <iostream>
using namespace std;

// Function to modify elements of an array using call by reference
void modifyArray(int (&arr)[5]) {
    for (int i = 0; i < 5; i++) {
        arr[i] *= 2;  // Doubling each element
    }
}

int main() {
    int arr[5];

    cout << "Enter 5 elements: ";
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    cout << "Before modification: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Calling the function
    modifyArray(arr);

    cout << "After modification: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
