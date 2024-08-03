// Reverse a string
#include <iostream>

#define maxSize 100

int strlenth(char *str)
{
    int i = 0;
    while (*(str + i) != '\0')
        i++;
    return i;
}

int main()
{
    char str[maxSize];
    char reverseStr[maxSize];
    int lenth = 0;

    std::cout << "Enter a string( max 99 chars ): ";
    std::cin.getline(str,maxSize);

    lenth = strlenth(str);

    for (int i = 0; i <= lenth; i++) // i till <= copies the '\0'
    {
        reverseStr[i] = str[lenth - 1 - i];
    }

    std::cout << "The reversed string is : " << reverseStr << '\n';

    return 0;
}