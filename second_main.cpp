
 #include <iostream> 
 #include <iomanip> // для std::setw 
 #include <limits>
 void print_multiplication_table(int number) { 
     for (int i = 1; i <= 10; ++i) { 
         std::cout << std::setw(2) << number << " * "  
                   << std::setw(2) << i << " = "  
                   << std::setw(3) << number * i << std::endl; 
     } 
 } 

 int main() { 
     std::cout << "t\Hello, multiply!\n\n"; 

     int number; 
     std::cout << "Enter number: "; 
     while (!(std::cin >> number)) { 
         std::cout << "Invalid input. Please enter a number: "; 
         std::cin.clear(); 
         std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
     } 

     print_multiplication_table(number); 

     std::cin.get(); // ожидание ввода пользователя 
     return 0; 
 }   