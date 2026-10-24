#include <iostream>

// Include your header file from the include folder
// Using ../ goes up one directory level from src/, then down into include/
#include "../include/example.h"

int main() {
    std::cout << "Initializing Maze Game Repository...\n";

    // Instantiate the class from example.h
    Example repoTest("src/main.cpp has successfully accessed include/example.h!");
    
    // Call the method
    repoTest.showConnection();

    return 0;
}