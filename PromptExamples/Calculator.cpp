#include "Calculator.h"
#include <iostream>
#include <stdexcept>
#include <cmath>
using namespace std;

// Function to add two numbers
double Calculator::sum(double a, double b) {
    return a + b;
}

// Function to subtract the second number from the first
double Calculator::subtract(double a, double b) {
    return a - b;
}

// Function to multiply two numbers
double Calculator::multiply(double a, double b) {
    return a * b;
}

// Function to divide the first number by the second
double Calculator::divide(double a, double b) {
    if (b == 0) {
        throw std::invalid_argument("Error: Division by zero");
    }
    return a / b;
}

// Function to calculate the square root of a number
double Calculator::sqrt(double a) {
    if (a < 0) {
        throw std::invalid_argument("Error: Square root of negative number");
    }
    return std::sqrt(a);
}

// Function to calculate the square of a number
double Calculator::square(double a) {
    return a * a;
}
