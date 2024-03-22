#include <iostream>

// ANSI escape codes for text colors
const std::string RESET_COLOR = "\033[0m";
const std::string RED_COLOR = "\033[31m";
const std::string GREEN_COLOR = "\033[32m";
const std::string YELLOW_COLOR = "\033[33m";

int main() {
    std::cout << "This is " << RED_COLOR << "red" << RESET_COLOR << " text." << std::endl;
    std::cout << "This is " << GREEN_COLOR << "green" << RESET_COLOR << " text." << std::endl;
    std::cout << "This is " << YELLOW_COLOR << "yellow" << RESET_COLOR << " text." << std::endl;

    return 0;
}
