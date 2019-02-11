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
    for (int i = 5; i * i <= n; i += 6) {
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

    for (int i = limit; i > 1; i--)
    {
        if (is_prime(i))
        {
            std::cout << i << std::endl;
            return 0;
        }
    }
}
