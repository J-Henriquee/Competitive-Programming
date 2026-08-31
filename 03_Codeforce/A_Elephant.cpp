#include <stdio.h>
#include <iostream>
#include <vector>

int main(){
    int A{};
    std::cin >> A;
    std::vector<int> P{5, 4, 3, 2, 1};

    int count = 0;
    int i = 0;
    while (true)
    {
        if (A == 0)
        {
            break;
        }
        if (A >= P[i])
        {
            A = A - P[i];
            count++;
        }
        else
        {
            i++;
        }
    }

    std::cout << count << std::endl; 
    
    return 0;
}


