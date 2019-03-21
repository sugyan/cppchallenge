#include <iostream>
#include <bitset>

std::string to_binary(unsigned int const v)
{
    return std::bitset<5>(v).to_string();
}

unsigned int gray_encode(unsigned int const v)
{
    return v ^ (v >> 1);
}

unsigned int gray_decode(unsigned int gray)
{
    for (unsigned int bit = 1U << 4; bit > 1; bit >>= 1)
    {
        if (gray & bit)
        {
            gray ^= (bit >> 1);
        }
    }
    return gray;
}

int main()
{
    std::cout << "Number\tBinary\tGray\tGrayN\tDecoded" << std::endl;
    for (unsigned int n = 0; n < 32; ++n)
    {
        auto encg = gray_encode(n);
        auto decg = gray_decode(encg);
        std::cout << n << "\t"
                  << to_binary(n) << "\t"
                  << to_binary(encg) << "\t"
                  << encg << "\t"
                  << decg << std::endl;
    }
}
