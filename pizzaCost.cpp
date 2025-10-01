// Copyright (c) 2025 Yoma Ozoh
// All rights reserved.
//
// Created by: Yoma Ozoh
// Date: September 30, 2025
// Calculate the cost of a pizza with user input.
#include <iomanip>  // for std::fixed, std::setprecision
#include <iostream>

int main() {
    // declare constants
    const float HST = 0.13;
    const float LABOUR_COST = 2.00;
    const float RENTAL_COST = 2.25;
    const float INGRED_COST = 1.5;
    // declare variables
    float diameter, tax, subtotal, total;
    // get diameter from user
    std::cout << "Enter the diameter(mm): ";
    std::cin >> diameter;
    // process
    subtotal = LABOUR_COST + RENTAL_COST + INGRED_COST * diameter;
    tax = HST * subtotal;
    total = subtotal + tax;
    std::cout << "The total cost is: $" << std::fixed
    << std::setprecision(2) << total << "\n";
}