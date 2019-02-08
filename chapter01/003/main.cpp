#include <iostream>

unsigned int gcd(const unsigned int a, const unsigned int b)
{
    return b == 0 ? a : gcd(b, a % b);
}

unsigned int lcm(const unsigned int a, const unsigned int b)
{
    unsigned int h = gcd(a, b);
    return h ? (a * (b / h)) : 0;
}

int main()
{
    std::cout << "numbers: ";

    unsigned int a, b;
    std::cin >> a >> b;

    std::cout << lcm(a, b) << std::endl;
}
