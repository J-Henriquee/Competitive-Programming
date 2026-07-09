#include <stdio.h>
#include <iostream>
#include <iomanip>

int main()
{
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */

    // This one defines a variable of type double.
    double R{};

    std::cin >> R;

    double pi = 3.14159;

    // This one multiplies these numbers so we can get the area of this circle.
    double A = pi * R * R;

    std::cout << "A=" << std::fixed << std::setprecision(4) << A << std::endl;

    return 0;
}