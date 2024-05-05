#include <iostream>
#include<limits>
int main() {
    char operat = '0';
    float number1 = 0;
    float number2 = 0;
    std::cout << "Enter operator (+, -, *, /)";
    std::cin >> operat;

    std::cout << "Enter operands (number1 and number2): ";
    std::cin >> number1 >> number2;

    switch (operat) {
        case '+':
            std::cout << number1 + number2;
            break;
        case '-':
            std::cout << number1 - number2;
            break;
        case '*':
            std::cout << number1 * number2;
            break;
        case '/':
            if (number2 != 0) {
                std::cout << number1 / number2;
            } else {
                std::cout << "Division by zero!";
            }
            break;
        default:
            std::cout << "ERROR: Unknown operator.";
            break;
    }
    std::cout << std::endl;

    // Заменено на переносимый способ ожидания ввода от пользователя
    std::cout << "Press Enter to continue...";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();

    return 0;
}