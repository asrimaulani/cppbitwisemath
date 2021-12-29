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
    unsigned yTwosComplement = ~y + 1;
    return AddTwoNumbers(x, yTwosComplement);
}