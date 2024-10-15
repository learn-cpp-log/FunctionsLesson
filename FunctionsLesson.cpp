#include <iostream>

int getNumber()
{
    std::cout << "Enter a number: ";
    int z{};
    std::cin >> z;
    return z;
}
int doubleNumber(int x)
{
    return 2 * x;
}

void printResult(int y)
{
    std::cout << "Double of the number is " << y << '\n';
}
int main()
{
    int num{ getNumber() };
    printResult(doubleNumber(num));

    return 0;
}