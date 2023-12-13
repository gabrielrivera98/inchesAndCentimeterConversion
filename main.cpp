#include <iostream>

int main() {
    constexpr double cmPerInch = 2.54;

    double length {};
    char unit {};

    std::cout << "Please enter a unit of length. i or c: ";
    std::cin >> unit;
    std::cout << "Please enter a length for the unit: ";
    std::cin >> length;

    if (length >= 0)
    {
        if (unit == 'i')
            std::cout << length << " in cm = " << cmPerInch * length << "." << std::endl;
        else if (unit == 'c')
            std::cout << length << " in in = " << length / cmPerInch << "." << std::endl;
        else
            std::cout << "You've entered an invalid character.";
    }
    else
        std::cout << "You've entered a negative integer.";
}
