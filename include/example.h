#pragma once // This prevents the header from being loaded multiple times
#include <iostream>
#include <string>

class Example {
private:
    // Encapsulation: Keeping the data hidden
    std::string testMessage;

public:
    // Constructor
    Example(std::string msg) {
        testMessage = msg;
    }

    // Method to test the output
    void showConnection() {
        std::cout << "SUCCESS: " << testMessage << std::endl;
    }
};