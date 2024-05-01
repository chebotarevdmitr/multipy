#include <iostream>
#include <iomanip> // Для использования std::setw
#include <limits> // Необходимо для std::numeric_limits
int main() {
    std::cout << "\t Hello multiply\n";

    int number = 0;
    std::cout << "Enter number: ";
    std::cin >> number;

    for (int i = 1; i <= 10; ++i) {
        std::cout << std::setw(2) << number << " * " << std::setw(2) << i << " = " << std::setw(4) << number * i << std::endl;
    }

    std::cout << "Press Enter to continue...";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Очистка буфера ввода
    std::cin.get(); // Ожидание нажатия Enter

    return 0;


 return 0;	
}