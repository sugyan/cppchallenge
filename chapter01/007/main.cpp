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
    unsigned int limit = 1000000;
    for (unsigned int n = 1; n < limit; ++n)
    {
        auto sum1 = sum_proper_divisors(n);
        if (sum1 < limit)
        {
            auto sum2 = sum_proper_divisors(sum1);
            if (sum2 == n && n != sum1 && n < sum1)
            {
                std::cout << n << ", " << sum1 << std::endl;
            }
        }
    }
}
