// Check a number is Armstrong
#include <iostream>

int power(int base, int exp)
{
    int res = 1;
    while (exp > 0)
    {
        if (exp & 1)
        {
            res = res * base;
        }

        base *= base;
        exp >>= 1;
    }
    return res;
}

int main()
{
    int num = 0, org = 0, sum = 0;
    std::cout << "Enter a number: ";
    std::cin >> org;

    num = org;

    while (num != 0)
    {
        sum += power(num % 10,3);
        num /= 10;
    }

    if (sum == org)
    {
        std::cout << "Armstrong\n";
    }
    else
    {
        std::cout << "Not Armstrong\n";
    }

    return 0;
}