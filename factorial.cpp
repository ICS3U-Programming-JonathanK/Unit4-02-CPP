// Copyright (c) 2021 Jonathan Kene All rights reserved.
//
// Created by: Jonathan
// Date: May 20, 2021
// This program asks the user for a whole number. It
// then calculates the factorial of a number

#include <iostream>


int main() {
    // initializations
    int counter = 0;
    int factorialAnswer = 1;
    int userNumInt;
    std::string userNumString;

    // get the user's number
    std::cout << "Enter a postive number: ";
    std::cin >> userNumString;

    try {
        userNumInt = std::stoi(userNumString);
        // calculate the factorial of the number
        if (userNumInt > 0) {
           do {
               counter++;
               factorialAnswer = factorialAnswer * counter;
               std::cout << "Tracking" << counter <<
                            " times through the loop.\n";
              } while (counter < userNumInt);
              std::cout << "\n";
              std::cout << userNumInt << "! = " << factorialAnswer << std::endl;
              // display the answer to the user
        } else {
            std::cout << "\n";
            std::cout << userNumInt << " is not a valid number." << std::endl;
        }
        // make sure to catch errors such as anything but an integer
    } catch (std::invalid_argument) {
        // The user did not enter an integer.
        std::cout << "\n";
        std::cout << "Please enter a valid number.\n";
    }
    std::cout << "\n";
    std::cout << "Thank you for your input" << std::endl;
}
