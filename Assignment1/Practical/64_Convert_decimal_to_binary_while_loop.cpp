#include <iostream>
#include <stack>
using namespace std;

int main() {
    int decimal;
    cout << "Enter a decimal number: ";
    cin >> decimal;

    stack<int> binary;

    while (decimal > 0) {
        binary.push(decimal % 2);
        decimal /= 2;
    }

    cout << "Binary equivalent: ";
    while (!binary.empty()) {
        cout << binary.top();
        binary.pop();
    }
    cout << endl;

    return 0;
}
