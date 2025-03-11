#include <iostream>
using namespace std;

// Function to calculate area of a circle
double area(double radius) {
    return 3.14159 * radius * radius;  // πr²
}

// Function to calculate area of a rectangle
double area(double length, double width) {
    return length * width;  // l × w
}

// Function to calculate area of a triangle
double area(double base, double height, int) {
    return 0.5 * base * height;  // ½ × b × h
}

int main() {
    double r, l, w, b, h;

    // Circle
    cout << "Enter radius of the circle: ";
    cin >> r;
    cout << "Area of Circle: " << area(r) << endl;

    // Rectangle
    cout << "Enter length and width of the rectangle: ";
    cin >> l >> w;
    cout << "Area of Rectangle: " << area(l, w) << endl;

    // Triangle
    cout << "Enter base and height of the triangle: ";
    cin >> b >> h;
    cout << "Area of Triangle: " << area(b, h, 0) << endl;

    return 0;
}
