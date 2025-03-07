#include <iostream>
using namespace std;

int main() {
    int num = 10;

    // C-style casting: (double)num
    double convertedValue = (double)num; 

    // Alternative C-style cast
    double anotherConvertedValue = double(num);

    cout << "Integer value: " << num << endl;
    cout << "Converted to double (C-style cast): " << convertedValue << endl;
    cout << "Converted to double (alternative C-style cast): " << anotherConvertedValue << endl;

    return 0;
}
