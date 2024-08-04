// Power of a number using Binary Exponentiation ( excluding negative exps )
#include <iostream>

long long power(int base, int exp)
{
    long long res = 1;
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
    int base = 0, exp = 0;
    std::cout<<"Enter base: ";
    std::cin>>base;
    std::cout<<"Enter exponent: ";
    std::cin>>exp;
    std::cout<<"The res is :"<<power(base,exp)<<std::endl;

    return 0;
}


