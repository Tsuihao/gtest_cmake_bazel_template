#include "math.hpp"
#include <iostream>

int main()
{
    math m;
    float a = 3;
    float b = 4;

    std::cout << "addition =" << m.add(a,b) << std::endl;
    std::cout << "multiplication = " << m.multiply(a,b) << std::endl;

}