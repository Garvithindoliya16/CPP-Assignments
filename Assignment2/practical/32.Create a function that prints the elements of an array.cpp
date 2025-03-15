#include <iostream>

void printArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int numbers[] = {10, 20, 30, 40, 50};
    int arraySize = sizeof(numbers) / sizeof(numbers[0]);
    printArray(numbers, arraySize);
    return 0;
}
