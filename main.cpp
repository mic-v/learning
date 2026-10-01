#include "src/math/fibonacci.h"
#include "src/math/vec2.h"
#include "src/sort/bubblesort.h"
#include <fmt/core.h>
#include <format>
#include <iostream>
#include <vector>
int main()
{
    learn::vec2<int>{1, 2};
    std::vector<int> vec{4, 3, 2, 1, 4, 6};

    learn::sort::bubblesort(vec);

    return 0;
}
