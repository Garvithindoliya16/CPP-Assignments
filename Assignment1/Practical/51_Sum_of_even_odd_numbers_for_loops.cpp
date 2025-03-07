#include <iostream>
using namespace std;

int main() {
    int evenSum = 0, oddSum = 0;

    for (int i = 1; i <= 100; i++) {
        if (i % 2 == 0)
            evenSum += i;
        else
            oddSum += i;
    }

    cout << "Sum of even numbers between 1 and 100: " << evenSum << endl;
    cout << "Sum of odd numbers between 1 and 100: " << oddSum << endl;

    return 0;
}
