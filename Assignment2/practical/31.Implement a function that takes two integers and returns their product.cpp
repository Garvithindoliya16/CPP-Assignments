#include <iostream>

int multiply(int a, int b) {
  return a * b;
}

int main() {
  int num1, num2;
  std::cout << "Enter the first integer: ";
  std::cin >> num1;
  std::cout << "Enter the second integer: ";
  std.cin >> num2;

  int product = multiply(num1, num2);
  std::cout << "The product is: " << product << std::endl;
  return 0;
}
