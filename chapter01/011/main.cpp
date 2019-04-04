#include <iostream>
#include <vector>

std::string to_roman(unsigned int v)
{
    std::vector<std::pair<unsigned int, char const*>> roman
    {
        { 1000, "M"  },
        {  900, "CM" },
        {  500, "D"  },
        {  400, "CD" },
        {  100, "C"  },
        {   90, "XC" },
        {   50, "L"  },
        {   40, "XL" },
        {   10, "X"  },
        {    9, "IX" },
        {    5, "V"  },
        {    4, "IV" },
        {    1, "I"  },
    };
    std::string result;
    for (auto const& [n, s]: roman)
    {
        while (v >= n)
        {
            result += s;
            v -= n;
        }
    }
    return result;
}

int main()
{
    unsigned int value;
    std::cin >> value;
    std::cout << to_roman(value) << std::endl;
}
