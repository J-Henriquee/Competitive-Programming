#include <iostream>


int main(){
    bool a = true;
    bool b = false;

    std::cout << std::boolalpha;
    std::cout << a << std::endl;
    std::cout << b << std::endl;

    std::cout << (a||b) << std::endl;

    std::cout << (a && b) << std::endl;
}

