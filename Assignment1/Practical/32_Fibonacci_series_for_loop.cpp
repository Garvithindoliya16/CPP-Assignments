#include <iostream>
using namespace std;

int main() {
    int n, t1 = 0, t2 = 1;
    cout << "Enter the number of terms: ";
    cin >> n;

    cout << "Fibonacci series: ";
    for (int i = 1; i <= n; i++) {
        cout << t1 << " ";
        int nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    cout << endl;
    return 0;
}
