#include <iostream>

// Declaration of an inline function
inline int add(int a, int b) {
    return a + b;
}

int main() {
    // Call to the inline function
    int result = add(3, 4);

    // Output the result
    std::cout << "Result: " << result << std::endl;

    return 0;
}
