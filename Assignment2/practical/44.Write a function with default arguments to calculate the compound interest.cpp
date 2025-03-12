#include <iostream>
#include <cmath> // For power function
using namespace std;

// Function to calculate compound interest with default arguments
double calculateCompoundInterest(double principal, double rate, int time, int n = 1) {
    // Formula: A = P(1 + r/n)^(nt), where A is the amount after interest
    // Compound Interest = A - P
    double amount = principal * pow((1 + rate / n), n * time);
    return amount - principal; // Compound Interest = Amount - Principal
}

int main() {
    double principal, rate;
    int time, n;

    // Taking user input
    cout << "Enter principal amount: ";
    cin >> principal;
    cout << "Enter rate of interest (as a decimal): ";
    cin >> rate;
    cout << "Enter time period (in years): ";
    cin >> time;

    // Default value of n = 1 (annual compounding)
    double interest = calculateCompoundInterest(principal, rate, time);
    cout << "Compound Interest (annual compounding): " << interest << endl;

    // Taking n (number of times interest applied per year)
    cout << "Enter number of times interest is compounded per year: ";
    cin >> n;
    interest = calculateCompoundInterest(principal, rate, time, n);
    cout << "Compound Interest (compounded " << n << " times per year): " << interest << endl;

    return 0;
}
