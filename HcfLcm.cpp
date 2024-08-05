#include <iostream>

int findHCF(int num1, int num2)
{
    int large = num1 > num2 ? num1: num2;
    int small = num1 < num2 ? num1 : num2;

    while ( small != 0)
    {
        int temp = small;
        small = large % small;
        large = temp;
    }
    return large;
}

int findLCM(int num1, int num2)
{
    int max = num1 > num2 ? num1 : num2;
    int lcm = 1;

    int i = max;
    while (1)
    {
        if (i % num1 == 0 && i % num2 == 0)
        {
            lcm = i;
            break;
        }

        i += max;
    }

    return lcm;
}

int main()
{
    bool choice;
    int num1, num2;

    std::cout << "Enter num1: ";
    std::cin >> num1;
    std::cout << "Enter num2: ";
    std::cin >> num2;
    std::cout << "The HCF is : " << findHCF(num1, num2) << std::endl;
    std::cout << "The LCM is : " << findLCM(num1, num2) << std::endl;
}