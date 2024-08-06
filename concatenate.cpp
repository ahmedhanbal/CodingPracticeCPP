#include <iostream>

#define maxSize 100
int main()
{
    char str1[maxSize],str2[maxSize];
    char * p1 = str1, * p2 = str2;

    std::cout<<"Enter string 1: ";
    std::cin.getline(str1,maxSize);
    std::cout<<"Enter string 2: ";
    std::cin.getline(str2,maxSize);

    while(*(++p1));

    while( *(p1++) = *(p2++));

    std::cout<<"The concatenated string is: "<<str1<<std::endl;

    return 0;
}