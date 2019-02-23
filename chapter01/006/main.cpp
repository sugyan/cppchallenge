#include <iostream>
#include <cmath>

unsigned int sum_proper_divisors(unsigned int const n)
{
    unsigned int result = 1;
    for (int i = 2; i <= std::sqrt(n); ++i)
    {
        if (n % i == 0)
        {
            result += i == n / i ? i : i + n / i;
        }
    }
    return result;
}

int main()
{
    unsigned int limit;
    std::cin >> limit;

    for (int n = 10; n <= limit; ++n)
    {
        auto sum = sum_proper_divisors(n);
        if (sum > n)
        {
            std::cout
                << n
                << " abudance: " << sum - n << std::endl;
        }
    }
}