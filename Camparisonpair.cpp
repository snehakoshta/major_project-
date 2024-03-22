#include <iostream>
#include <windows.h> // WinApi header

int main() {
    Beep(523, 500); // 523 hertz (C5) for 500 milliseconds
    std::cin.get(); // Wait for user input
    return 0;
}