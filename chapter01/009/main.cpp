#include <iostream>
#include <cmath>
#include <vector>

std::vector<unsigned long long> prime_factors(unsigned long long n)
{
    std::vector<unsigned long long> factors;
    if (n == 0) {
        return factors;
    }

    while (n % 2 == 0)
    {
        factors.push_back(2);
        n /= 2;
    }
    unsigned long long root = std::sqrt(n);
    for (unsigned long long i = 3; i <= root; i += 2)
    {
        while (n % i == 0)
        {
            factors.push_back(i);
            n /= i;
        }
    }
    if (n > 2)
    {
        factors.push_back(n);
    }
    return factors;
}

int main()
{
    unsigned long long n = 0;
    std::cin >> n;

    auto factors = prime_factors(n);
    std::copy(
        factors.begin(), factors.end(), std::ostream_iterator<unsigned long long>(std::cout, " "));
}
