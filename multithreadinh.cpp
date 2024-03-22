#include <iostream>
#include <thread>

// Function to be executed by a thread
void printHello() {
    std::cout << "Hello from the thread!\n";
}

int main() {
    // Create a thread and execute the function
    thread t1(printHello);

    // Main thread continues its work
    std::cout << "Hello from the main thread!\n";

    // Wait for the thread to finish
    t1.join();

    return 0;
}
