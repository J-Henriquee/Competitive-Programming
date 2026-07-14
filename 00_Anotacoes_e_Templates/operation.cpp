#include <iostream>


int main(){

    int number = 2;

    int number1 = 8;
    

    auto result = number1 - number;

    std::cout << typeid(result).name() << std::endl;
}