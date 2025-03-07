#include <iostream>
using namespace std;

int main() {
    int num, flag = 0;
    cout << "Enter a number: ";
    cin >> num;

    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            flag = 1;
            break;
        }
    }

    if (num == 1) {
        cout << "1 is neither prime nor composite." << endl;
    } else {
        if (flag == 0)
            cout << num << " is a prime number." << endl;
        else
            cout << num << " is not a prime number." << endl;
    }

    return 0;
}
