#include <stdio.h>
#include <iostream>

int main(){

    int W;
    std::cin >> W;

    if ( W == 2){
        std::cout << "NO" << std::endl;
    }

    else if ( W % 2 == 0)
    {
        std::cout << "YES" << std::endl;
    }
    else {
        std::cout << "NO" << std::endl;
    }
    return 0;

}