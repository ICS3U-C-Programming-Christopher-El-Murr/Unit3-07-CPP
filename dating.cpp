// Copyright (c) 2025 Christopher El-Mur
// All rights reserved
// Created by Christopher El-Mur
// Date: Oct 30 2025
// This program asks the user for their age
// and tells them if they are able to date the grandchild

#include <iostream>
#include <stdexcept>

int main() {
    int userAge;

    try {
        // Enable exceptions for input failures
        std::cin.exceptions(std::ios::failbit | std::ios::badbit);

        // Ask the user for their age
        std::cout << "Enter your age: ";
        std::cin >> userAge;

        // Check if the user's age is between 25 and 40
        if (userAge > 25 && userAge < 40) {
            // tell the user is they can date the grandchild
            std::cout << "You can date my grandchild :)" << std::endl;
        } else {
            std::cout << "You cannot date my grandchild, you are "
                      << userAge << " years old." << std::endl;
        }
        // Tell the user to enter a valid input
    } catch (const std::ios_base::failure& e) {
        std::cerr << "Invalid input! Please enter a valid number." << std::endl;
}
}
