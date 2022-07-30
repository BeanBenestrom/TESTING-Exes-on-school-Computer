#include <string>
#include <iostream>

#include "test.h"


int main()
{
    int n;

    std::cout << "Pick a number: ";
    std::cin >> n;

    std::cout << utility::E(n);
    std::cin >> n;

    return 0;
}