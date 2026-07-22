#include <iostream>

int main()
{
    // Here we define these variables as bool type
    bool red_light = true;
    bool green_light = false;

    // We check the conditions
    if (red_light)
    {
        std::cout << "Pare!!" << std::endl;
    }
    else
    {
        std::cout << "Pode ir!!" << std::endl;
    }

    if (green_light)
    {
        std::cout << "Pode ir!!" << std::endl;
    }
    else
    {
        std::cout << "Pare!!" << std::endl;
    }

    return 0;
}