#include <stdio.h>
#include <iostream>
#include <iomanip>

int main()
{
    double A, B;
    std::cin >> A >> B;

    B = int(B * 10) / 10.0;

    B = int(B * 10) / 10.0;

    double X = (A*3.5 + B*7.5) / 11;

 std::cout << "MEDIA = " << std::fixed << std::setprecision(5) << X << std::endl;

    return 0;
}