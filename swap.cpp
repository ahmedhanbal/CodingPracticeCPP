// Swaps Two Numbers
#include <iostream>
int main()
{
    int num1, num2;
    std::cout << "Enter two numbers to swap\n";
    std::cout << "Num1: ";
    std::cin >> num1;
    std::cout << "Num2: ";
    std::cin >> num2;

    num1 = num1 ^ num2;
    num2 = num1 ^ num2;
    num1 = num2 ^ num1;
    std::cout << "Numbers swapped: " << num1 << ' ' << num2 << '\n';

    return 0;
}