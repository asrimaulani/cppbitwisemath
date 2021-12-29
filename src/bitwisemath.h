int AddTwoNumbers(int x, int y)
{
    unsigned carry{};
    while (y != 0)
    {
        carry = x & y;
        x = x ^ y;
        y = carry << 1;
    }
    return x;
}

int SubTwoNumbers(int x, int y)
{
    unsigned borrow{};
    while (y != 0)
    {
        borrow = (~x) & y;
        x = x ^ y;
        y = borrow << 1;
    }
    return x;
}

int SubTwoNumbersWithTwosComplement(int x, int y)
{
    int yTwosComplement{AddTwoNumbers(~y, 1)};
    return AddTwoNumbers(x, yTwosComplement);
}