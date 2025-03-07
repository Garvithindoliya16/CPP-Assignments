#include <iostream>
using namespace std;

int main() {
    int n;
    double harmonicSum = 0.0;

    cout << "Enter the number of terms: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        harmonicSum += 1.0 / i;
    }

    cout << "Sum of harmonic series: " << harmonicSum << endl;
    return 0;
}
