#include <iostream>

// Function to calculate the summation of two numbers
double multipling(double a, double b) {
    return a * b;
}





int main() {
    // Get user input for two numbers
    double num1, num2;
    std::cout << "Enter the first number: ";
    std::cin >> num1;
    std::cout << "Enter the second number: ";
    std::cin >> num2;

    // Perform operations and print results
    std::cout << "Operation: " << multipling(num1, num2) << std::endl;
   
    return 0;
}
