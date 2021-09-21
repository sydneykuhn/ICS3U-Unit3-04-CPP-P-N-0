// Copyright (c) 2020 Sydney Kuhn All rights reserved
//
// Created by: Sydney Kuhn
// Created on: Sep 2020
// This program can determine if a number is positive, negative, or a zero

#include <iostream>
#include <random>

int main() {
    // this function is the program
    int integer;

    // input
    std::cout << "Enter an Integer: ";
    std::cin >> integer;

    // process & output
    if (integer >0) {
        std::cout << "" << integer << " is a positive number." << std::endl;
    } else if (integer <0) {
        std::cout << "" << integer << " is a negative number." << std::endl;
    } else if (integer == 0) {
        std::cout << "" << integer << " is just a zero." << std::endl;
    }
    std::cout << "" << std::endl;
    std::cout << "Done." << std::endl;
}
