#include <iostream>
#include <iomanip>

int main(){
    int A, B;
    double C;
    std::cin >> A >> B >> C;
    double X = B*C;

    std::cout <<"NUMBER = " << A << std::endl;
    std::cout <<"SALARY = U$ " << std::fixed << std::setprecision(2) << X << std::endl;
}