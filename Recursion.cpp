// Recursion.cpp : This file contains the 'main' function. Program execution begins and ends there.
// samuel culp

#include <iostream>

int iterative_add(int, int);

int main()
{
    //std::cout << iterative_add(0, 1) << std::endl;
     iterative_add(0, 1); // this so you don't see double
}

int iterative_add(int base, int add) {
    int result = base;
    int future = add + base; // you can add this to be ahead of add
    do
    {
        result += add;

        std::cout << result << std::endl;

        add++;
        future = result + add; // this is adding ahead of add
    } while (future < 21); // If the number is 20 in the while loop it will overshoot the target goal because 15 + 6 = 21
                            // to fix this you use 15 or have something ahead of add so it will stop at 20
    return result;
}
