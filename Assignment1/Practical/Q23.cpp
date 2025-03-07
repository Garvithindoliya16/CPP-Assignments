#include <iostream>
using namespace std;

void modifyValue(const int* ptr) {
    // Using const_cast to remove constness and modify the value
    int* modifiablePtr = const_cast<int*>(ptr);
    *modifiablePtr = 50;  // Modifying the value
}

int main() {
    const int num = 10;
    cout << "Before modification: " << num << endl;

    modifyValue(&num); // Passing the address of the constant variable

    cout << "After modification: " << num << endl; // Undefined behavior

    return 0;
}
