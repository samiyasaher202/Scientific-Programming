// Samiya_Saher_1_Q2.cpp
// Exercise 2: Sales Tax Calculator
// This program takes a sale amount as input, calculates the
// sales tax at a fixed rate of 9%, and displays the tax amount
// and total amount due.

#include <iostream>
#include <iomanip>

int main() {
    // Define the tax rate as a constant (9%)
    const double TAX_RATE = 0.09;

    double saleAmount;

    // Prompt the user to enter the sale amount
    std::cout << "Enter the sale amount: ";
    std::cin >> saleAmount;

    // Calculate tax and total
    double taxAmount   = saleAmount * TAX_RATE;
    double totalAmount = saleAmount + taxAmount;

    // Display results formatted to 2 decimal places
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Sale amount:     " << saleAmount  << std::endl;
    std::cout << "Tax amount:      " << taxAmount   << std::endl;
    std::cout << "Total amount due: " << totalAmount << std::endl;

    return 0;
}
