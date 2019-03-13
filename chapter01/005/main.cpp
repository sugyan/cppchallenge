#include <iostream>

bool is_prime(const int n)
{
    if (n <= 3)
    {
        return n > 1;
    }
    if (n % 2 == 0 || n % 3 == 0)
    {
        return false;
    }
    for (int i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    unsigned int limit;
    std::cin >> limit;

    for (int n = 2; n <= limit; ++n)
    {
        if (is_prime(n) && is_prime(n + 6))
        {
            std::cout << n << ", " << n + 6 << std::endl;
        }
    }
}
