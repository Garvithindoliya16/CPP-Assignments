#include <iostream>
#include <cmath>

double calculateCircleArea(double radius) {
  const double PI = 3.14159265358979323846;
  return PI * std::pow(radius, 2);
}

int main() {
  double radius;
  std::cout << "Enter the radius of the circle: ";
  std::cin >> radius;
  double area = calculateCircleArea(radius);
  std::cout << "The area of the circle is: " << area << std::endl;
  return 0;
}
