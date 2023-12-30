#include <iostream>
#include <chrono>
#include <ctime>

int main() {
    // Get the current system time
    auto now = std::chrono::system_clock::now();
    std::time_t currentTime = std::chrono::system_clock::to_time_t(now);
    std::tm* localTime = std::localtime(&currentTime);
    std::cout << "Current Date and Time: " << std::asctime(localTime) << std::endl;

    return 0;
}
