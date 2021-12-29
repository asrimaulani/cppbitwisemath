#include <iostream>
#include "bitwisemath.h"

int main()
{
    std::cout << AddTwoNumbers(-1, -2) << std::endl;
    std::cout << SubTwoNumbers(2, -3) << std::endl;
    std::cout << SubTwoNumbersWithTwosComplement(2, -3) << std::endl;
    return 0;
}