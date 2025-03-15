#include <iostream>

// Function prototype
int findMax(int num1, int num2, int num3);

int main() {
    int a, b, c;
    std::cout << "Enter three numbers: ";
    std::cin >> a >> b >> c;
    
    int max = findMax(a, b, c);
    std::cout << "The maximum number is: " << max << std::endl;
    
    return 0;
}

// Function definition
int findMax(int num1, int num2, int num3) {
    int max = num1;
    if (num2 > max) {
        max = num2;
    }
    if (num3 > max) {
        max = num3;
    }
    return max;
}
