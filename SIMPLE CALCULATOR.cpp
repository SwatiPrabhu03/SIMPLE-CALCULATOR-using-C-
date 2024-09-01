#include <iostream>

// Function to perform addition
double add(double num1, double num2) {
    return num1 + num2;
}

// Function to perform subtraction
double subtract(double num1, double num2) {
    return num1 - num2;
}

// Function to perform multiplication
double multiply(double num1, double num2) {
    return num1 * num2;
}

// Function to perform division
double divide(double num1, double num2) {
    if (num2 == 0) {
        throw std::runtime_error("Cannot divide by zero!");
    }
    return num1 / num2;
}

// Function to display the calculator menu
void displayMenu() {
    std::cout << "Basic Calculator Program" << std::endl;
    std::cout << "------------------------" << std::endl;
    std::cout << "1. Addition" << std::endl;
    std::cout << "2. Subtraction" << std::endl;
    std::cout << "3. Multiplication" << std::endl;
    std::cout << "4. Division" << std::endl;
    std::cout << "5. Quit" << std::endl;
}

int main() {
    double num1, num2;
    int choice;

    while (true) {
        displayMenu();
        std::cout << "Enter your choice (1-5): ";
        std::cin >> choice;

        if (choice == 5) {
            std::cout << "Goodbye!" << std::endl;
            break;
        }

        if (choice < 1 || choice > 5) {
            std::cout << "Invalid choice. Please try again." << std::endl;
            continue;
        }

        std::cout << "Enter the first number: ";
        std::cin >> num1;
        std::cout << "Enter the second number: ";
        std::cin >> num2;

        try {
            switch (choice) {
                case 1:
                    std::cout << "Result: " << add(num1, num2) << std::endl;
                    break;
                case 2:
                    std::cout << "Result: " << subtract(num1, num2) << std::endl;
                    break;
                case 3:
                    std::cout << "Result: " << multiply(num1, num2) << std::endl;
                    break;
                case 4:
                    std::cout << "Result: " << divide(num1, num2) << std::endl;
                    break;
            }
        } catch (const std::exception& e) {
            std::cerr << "Error: " << e.what() << std::endl;
        }
    }

    return 0;
}