// Recursion.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int iterative_add(int, int);

int main()
{
    std::cout << iterative_add(0, 1) << std::endl;
}

int iterative_add(int base, int add) {
    int result = base;

    do
    {
        result += add;

        std::cout << result << std::endl;

        add++;
    } while (result < 20);

    return result;
}