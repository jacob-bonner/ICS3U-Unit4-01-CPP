// Copyright (c) 2019 Jacob Bonner All rights reserved.
//
// Created by: Jacob Bonner
// Created on: September 2019
// This program can find the sum of numbers using a while loop

#include <iostream>

int main() {
    // This function can find the sum of numbers using a while loop

    // Variables
    int positiveInteger;
    int sum = 0;
    int counter = 1;

    // Input
    std::cout << "Enter a positive integer here:" << std::endl;
    std::cin >> positiveInteger;

    // Process
    while (positiveInteger >= counter) {
        sum = sum + counter;
        counter++;
    }

    // Output
    std::cout << "The sum is " << sum << std::endl;
}
