#include <iostream>
#include <fstream>

int main() {
    // Writing to a file
    std::ofstream outFile("example.txt"); // Creates or opens a file for writing

    if (outFile.is_open()) {
        outFile << "Hello, File Handling in C++!\n";
        outFile << "This is a second line in the file.\n";
        outFile.close(); // Close the file
    } else {
        std::cout << "Unable to open the file for writing.\n";
    }

    // Reading from a file
    std::ifstream inFile("example.txt"); // Opens the file for reading

    if (inFile.is_open()) {
        std::string line;
        while (std::getline(inFile, line)) {
            std::cout << line << '\n';
        }
        inFile.close(); // Close the file
    } else {
        std::cout << "Unable to open the file for reading.\n";
    }

    return 0;
}
