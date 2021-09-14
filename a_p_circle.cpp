// Copyright (c) 2021 Michael Zagon All rights reserved

// Created by: Michael Zagon
// Created on: September 2021
// This program calculates the area and perimeter
// of a circle with radius 20 mm

#include <iostream>
#include <cmath>

int main() {
    // This function calculates the area and perimeter

    std::cout << "If a circle has a radius of 20 mm: " << std::endl;
    std::cout << std::endl;
    std::cout << "Area is " << (M_PI * pow(20, 2)) << " mm²." << std::endl;
    std::cout << "Perimeter is " << (2 * M_PI * 20) << " mm." << std::endl;
    std::cout << std::endl;
    std::cout << "Done." << std::endl;
}
