#include <string>
#include <iostream>
#include "../include/calcyplus.h"

int main(){
    // g++ -std=c++11 *.cpp -o test
    
    int yplus; 
    double c;
    std::string fluid;
    double length;

    std::cout << "Enter your desired YPlus value: " << std::endl;
    std::cin >> yplus;
    std::cout << "Enter a characteristic velocity in m/s: " << std::endl;
    std::cin >> c;
    std::cout << "Enter your Fluid (H2O or Air): " << std::endl;
    std::cin >> fluid;
    std::cout << "Enter a characteristic length scale (blade length) in meter: " << std::endl;
    std::cin >> length;

    output OP = calcYPlus(yplus, c, fluid, length);

    std::cout << "\n";
    std::cout << "\n";
    std::cout << "-------------------" << "\n";
    std::cout << "  Output  " << "\n";
    std::cout << "\n";
    std::cout << "The Reynoldsnumber for " << fluid << " is: " << "\n";
    std::cout << "Re = " << OP.Re << "\n";
    std::cout << "\n";
    std::cout << "The first element height for " << fluid << " is: " << "\n";
    std::cout << "y = " << OP.y;

    std::cout << "\n";
    std::cout << "-------------------" << "\n";
    std::cout << "  End of Program  ";



}