#include <iostream>
#include <cstdlib>

int main(int argc, char* argv[]) {
    if (argc != 3) {
        std::cerr << "Usage: " << argv[0] << " <integer1> <integer2>" << std::endl;
        return 1;
    }

    int num1 = std::atoi(argv[1]);
    int num2 = std::atoi(argv[2]);
    int sum = num1 + num2;

    std::cout << "Sum: " << sum << std::endl;

    return 0;
}
