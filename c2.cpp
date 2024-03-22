#include <iostream>
#include <chrono>
#include <thread>

// Function to execute after a certain time
void timerFunction() {
    std::cout << "Timer function executed!" << std::endl;
}

int main() {
    // Duration for the timer (in seconds)
    int duration = 5;

    // Convert duration to milliseconds
    auto duration_ms = std::chrono::seconds(duration);

    // Get the current time
    auto start = std::chrono::steady_clock::now();

    // Wait for the specified duration
    std::this_thread::sleep_for(duration_ms);

    // Calculate the elapsed time
    auto end = std::chrono::steady_clock::now();
    auto elapsed_ms = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);

    // Check if the duration has passed
    if (elapsed_ms >= duration_ms) {
        // Execute the timer function
        timerFunction();
    }

    return 0;
}
