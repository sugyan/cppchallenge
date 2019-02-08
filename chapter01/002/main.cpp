#include <iostream>

unsigned int gcd(const unsigned int a, const unsigned int b)
{
    return b == 0 ? a : gcd(b, a % b);
}

int main()
{
    std::cout << "numbers: ";

    unsigned int a, b;
    std::cin >> a >> b;

    std::cout << gcd(a, b) << std::endl;
}
