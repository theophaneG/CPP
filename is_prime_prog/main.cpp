#include <iostream>
#include <vector>
#include "sources.h"

bool primeCalculator(int);
int number = 0;


int main()
{
    int input;
    std::cout << "Please type a number" << std::endl;
    while (std::cin >> input)
    {
        std::cout << "The square of " << input << '\n';
        std::cout << "test" << primeCalculator(input) << '\n'; 
            if(std::cin.peek() == '\n')
            break;
    }
    return 0;
}

bool primeCalculator(int input)
{
    for ( int loop = 2; loop < input-1; loop++)
    {
        if (( input % loop) == 0)
        {
            return false;
        }
    }
    return true;
}