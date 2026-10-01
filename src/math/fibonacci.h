#pragma once

#include <cstdint>

namespace learn
{

uint32_t get_fibonacci(uint32_t n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return get_fibonacci(n - 1) + get_fibonacci(n - 2);
}

} // namespace learn
