#include <iostream>
#include <stdio.h>
#include <iomanip>

int main(){
    double A, B, C;

    std::cin >> A >> B >> C;

    double X = (A*5 + B*6 +  C*7) / 18;


    std::cout << "MEDIA = " << std::fixed << std::setprecision(1) << X << std::endl;

}