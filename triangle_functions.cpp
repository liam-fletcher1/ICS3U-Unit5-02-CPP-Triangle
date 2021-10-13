// Copyright (c) 2021 Liam Fletcher All rights reserved
//
// Created by: Liam Fletcher
// Created on: Oct 2021
// This program calculates the area of a traingle with user input
#include <iostream>

void CalculatesArea(int base, int height) {
    // calculate area of triangle

    int area;

    area = base * height / 2;
    std::cout << "" << std::endl;
    std::cout << "The area of the triangle is " << area << " cm²." << std::endl;
}

int main() {
    // this function calls the precedent function
    std::string heightFromUser;
    int heightFromUserInt;
    std::string baseFromUser;
    int baseFromUserInt;

    // input
    std::cout << "Enter your height (cm): ";
    std::cin >> heightFromUser;

    std::cout << "Enter your base (cm): ";
    std::cin >> baseFromUser;

    try {
        heightFromUserInt = std::stoi(heightFromUser);
        baseFromUserInt = std::stoi(baseFromUser);
        CalculatesArea(heightFromUserInt, baseFromUserInt);
    } catch (std::invalid_argument) {
        std::cout << "" << std::endl;
        std::cout << "That is an invalid number.";
    }
    std::cout << "\nDone." << std::endl;
}
