#include <iostream>
#include <string>


int main()
{
    int year;
    std::string name;

    std::cout << "What is your name and how years are you old?" << std::endl;



    std::getline(std::cin, name);

    std::cin >> year;


    std::cout << "Hi " << name << " you are " << year << " old! " << std::endl;

    return 0;

}