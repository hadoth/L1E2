#include <iostream>
#include "Math.h"

int main() {
    unsigned int x;
    unsigned int n;
    bool cont = true;
    bool askAgain;
    std::string val = "f";
    std::cout << "This script calculates the value of x^n"<< std::endl;
    while (cont) {
        std::cout << "Please provide value of x: ";
        std::cin >> x;
        std::cout << "Please provide value of n: ";
        std::cin >> n;
        std::cout << Math::power(x, n) << std::endl;

        do {
            std::cout<< "Do you like to continue? [y/n]";
            std::cin >> val;
            cont = val == "y";
            askAgain = (val != "y" && val !="n");
            if (askAgain) {
                std::cout<< "Command \"" << val << "\" not recognized." << std::endl;
            }
        } while (askAgain);
    }

    return 0;
}