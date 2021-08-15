//
// Created by Yu Chen on 8/15/21.
//
#include <iostream>
#include <iomanip>

const double SALES_TAX_MULTIPLIER = 1.075;
const int SHIPPING_COST = 2;

int main() {
    int bookPrice;
    std::cout << "Please list the total book price:" << std::endl;
    std::cin >> bookPrice;

    if (bookPrice <= 0) {
        throw "Book price must be positive integer.";
    }

    int numBooks;
    std::cout << "Please list the number of books." << std::endl;
    std::cin >> numBooks;

    if (numBooks <= 0) {
        throw "Number of books must be positive integer.";
    }

    double effectiveBookPrice = double(bookPrice) * SALES_TAX_MULTIPLIER + SHIPPING_COST;
    double totalOrderValue = effectiveBookPrice * numBooks;

    std::cout << "The total order value is " << std::setprecision(2) << std::fixed << totalOrderValue << std::endl;


}