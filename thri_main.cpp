#include <iostream>
#include <iomanip>

int main() {
    std::cout << "\tHello multiplyn\n\n";

    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= 9; j++) {
            std::cout << std::setw(4) << i * j;
        }
        std::cout << std::endl;
    }

    return 0;
}