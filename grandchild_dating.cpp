// Copyright (c) 2019 Liam Hearty All rights reserved.
//
// Created by: Liam Hearty
// Created on: October 2019
// This program will calculate the sum of two integers


#include <iostream>

std::count << "This is a test, are you good for my granddaughter?" std::endl;

int main() {
    std::string age_as_string;
    int age_as_int;

    std::cout << "Enter your age: " << std::endl;
    std::cin >> age_as_string;

    try {
        age_as_int = std::stoi(age_as_string);
        if (age_as_int < 25 || age_as_int > 40) {
        std::cout << "Get out of here!" << std::endl;
        } else if (age_as_int > 25 && age_as_int < 40) {
        std::cout << "You are accepted!" << std::endl;
        }} catch (std::invalid_argument) {
        std::cout << "You didn’t follow my instructions!";
    }
}
