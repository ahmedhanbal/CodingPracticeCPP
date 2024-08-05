// Power of a number using Modified Binary Exponentiation
#include <iostream>

long double power(int base, int exp)
{
    long double res = 1;
    bool neg = (exp < 0) ? true : false;
    if (neg)
        exp *= -1;

    while (exp > 0)
    {
        if (exp & 1)
        {
            res = res * base;
        }

        base *= base;
        exp >>= 1;
    }
    if (!neg)
        return res;
    else
        return 1 / res;
}

int main()
{
    int base = 0, exp = 0;
    std::cout << "Enter base: ";
    std::cin >> base;
    std::cout << "Enter exponent: ";
    std::cin >> exp;
    std::cout << "The res is : " << power(base, exp) << std::endl;

    return 0;
}
