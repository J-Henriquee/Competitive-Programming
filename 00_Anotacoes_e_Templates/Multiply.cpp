#include <iostream>

// We created a function that takes two parameters and multiplies them.
int multiply(int a, int b)
{
  int result = a * b;
  return result;
}

int main()
{
  std::cout << "Result: " << multiply(2, 3) << std::endl;
}