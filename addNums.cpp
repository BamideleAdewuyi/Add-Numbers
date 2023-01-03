#include <iostream>

int main() {

    // Explanation of program
    std::cout << "This program will ask for 2 numbers and return their sum.\n";
    
    // Declare variable a and take input
    double a;
    std::cout << "Input first number: ";
    std::cin >> a;
    
    // Declare variable b and take input
    double b;
    std::cout << "Input second number: ";
    std::cin >> b;

    // Return the sum
    std::cout << "The sum of " << a << " and " << b << " is: " << a+b << "\n";

}